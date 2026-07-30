# Write your MySQL query statement below
SELECT e.name,i.unique_id
from Employees e
LEFT JOIN EmployeeUNI i
on e.id=i.id;
