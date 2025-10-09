SELECT customer_id, customer_name FROM Customers
WHERE customer_id IN (
    SELECT customer_id FROM Orders 
    GROUP BY customer_id
    HAVING SUM(product_name = 'A') > 0 
        AND SUM(product_name = 'B') > 0 
        AND SUM(product_name = 'C') = 0
) ORDER BY customer_id ASC;
