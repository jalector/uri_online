						-- Uri online, sql problems
							-- Judá Alector

-- Problema 2602 : Basic Select
	select name from customers where "state" = 'RS';

-- Problema 2603 : Custumer Address
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
