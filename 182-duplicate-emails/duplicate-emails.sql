# Write your MySQL query statement below
select email As Email
from Person 
GROUP BY email
HAVING count(*)>1;