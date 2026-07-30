# Write your MySQL query statement below
DELETE t1 from Person t1
JOIN Person t2
On t1.email = t2.email
and t1.id > t2.id;