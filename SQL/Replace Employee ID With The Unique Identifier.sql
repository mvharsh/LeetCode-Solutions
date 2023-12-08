select e2.unique_id, e1.name from employees e1 
left join employeeUNI e2
on e1.id = e2.id 
