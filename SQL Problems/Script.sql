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
select
   id,
   name 
from
   products 
where
	exists(
      select
         id 
      from
         categories 
      where
         "name" like 'super%');