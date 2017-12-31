						-- Uri online, sql problems
							-- Judá Alector

-- Problema 2602 : Basic Select
	select name from customers where "state" = 'RS';

-- Problema 2603 : Customer Address
	select name, street from customers where "city" = 'Porto Alegre';

-- Problema 2604 : Under 10 or greater than 100
	select id, name from products where "price" < 10 or "price" > 100;	

-- Problema 2605 : Executive Representatives
	select 
		p.name, pr.name 
	from 
		products p
		join 
			providers pr
		on 	p.id_providers = pr.id
	where 
		p.id_categories = 6;

-- Problema 2606 : Categories !Wrong answer
	select id, name from products where id_categories = 9 or id_categories = 7;
	--This answer would be better if we use a subquery
	select
	   id,
	   name 
	from
	   products 
	where
		id_categories in (
	      select
	         id 
	      from
	         categories 
	      where
	         "name" like 'super%');
-- Problema 2607 : Providers'City in Alphabetical Order
	select distinct city from providers order by city;
-- Problema 2608 : Higher and Lower Price
	select max(price) as price, min(price) as price from products;
-- Problema 2608 : Products by Categories 
	select 
		c.name, sum(p.amount) 
	from 
		products p 
		join 
			categories c 
		on c.id = p.id_categories 
	group by 
		c.name;
-- Problema 2610 : Average Value of Products
	select trunc(avg(price),2) as price from products;
-- Problema 2611 : Action Movies
	select 
		id, name
	from 
		movies 
	where 
		id_genres = (select 
						id 
					from 
						genres 
					where 
						description = 'Action');
-- Problema 2612 : The actors Silva
	select 
		m.id, m.name 
	from 
		movies m 
	join 
		movies_actors ma
		on 
			m.id = ma.id_movies
	join 
		actors a
		on 
			a.id = ma.id_actors
	join 
		genres g
		on 
			g.id = id_genres
	where
		 a.name 
		 	like '%Silva' and description = 'Action'
	group by 
		m.id;
-- Problema 2613 : Cheap Movies
	select 
		m.id, m.name 
	from 
		movies m
	join 
		prices p
		on 
			p.id = m.id_prices
	where
		 p.value < 2.00;
-- Problema 2614 : September rentals
	select 
		c.name, r.rentals_date 
	from 
		customers c
	join 
		rentals r
		on 
			r.id_customers = c.id
	where 
		extract(month from "rentals_date") = 9 
		and 
		extract(year from "rentals_date") = 2016;
-- Problema 2615 : Expanding the business
	select distinct city from customers;
-- Problema 2616 : No Rental
	select id, name from customers where id not in(select id_customers from locations);
-- Problema 2617 : Provider Ajax Sa
	select 
		pd.name as name, pv.name as name 
	from 
		providers pv 
	join 
		products pd 
	on 
		pd.id_providers = pv.id 
	where 
		pv.name = 'Ajax SA';
-- Problema 2618 : Imported Products	
	select 
		pd.name, pv.name, c.name 
	from 
		products pd 
	join 
		providers pv 
		on 
			pv.id = pd.id_providers 
	join 
		categories c 
		on 
			c.id = pd.id_categories 
	where 
		pv.name = 'Sansul SA' 
		and 
		c.name = 'Imported';
-- Problema 2619 : Super Luxury
	select 
		pd.name, pv.name, pd.price 
	from 
		products pd 
	join 
		providers pv 
		on 
			pv.id = pd.id_providers 
	join 
		categories c 
		on 
			c.id = pd.id_categories 
	where 
		pd.price > 1000 
		and 
		c.name = 'Super Luxury';
-- Problema 2620 : Orders in Fist Half
	
	select 
		c.name, o.id 
	from 
		customers c 
	join 
		orders o 
		on 
			c.id = o.id_customers 
	where 
		extract(month from orders_date) <= 6 
		and
		extract(year from orders_date) = 2016;
-- Problema 2621 : Amounts Between 10 and 20
	select 
		pd.name 
	from 
		products pd 
	join 
		providers pv 
		on 
			pv.id = pd.id_providers 
	where 
		pv.name 
		like 
			'P%' 
		and 
		pd.amount 
			between 10 and 20;
-- Problema 2622 : Legal Person
 	select 
 		c.name 
 	from 
 		customers c 
 	where 
 		c.id 
 			in 
 				(select 
 					id_customers 
 				from 
 					legal_person);
-- Problema 2623 : Categories with Various Products
	select 
		pd.name, c.name 
	from 
		products pd 
	join 
		categories c 
		on
			c.id = pd.id_categories 
	where 
		(pd.amount > 100) 
		and 
			(pd.id_categories  = 1 
			or 
			pd.id_categories  = 2 
			or 
			pd.id_categories  = 3 
			or 
			pd.id_categories  = 6 
			or 
			pd.id_categories  = 9);
-- Problema 2624 : Number of Cities per Customers
	select count(distinct city) from customers;
-- Problema 2625 : CPF Validation
	select concat(substr(cpf,1,3), '.', substr(cpf,4,3), '.', substr(cpf,8,3),'-',substr(cpf, 12,2)) from natural_person;