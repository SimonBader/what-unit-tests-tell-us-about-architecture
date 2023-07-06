# Conclusion

What is important:
* invest time to clean up the unit test `// arrange` block
* keep the amount of assertions as small as possible 
* keep in mind that `EXPECT_CALL`, `Times()`, `WillOnce()` are assertions
* in case the `// arrange` block cannot be further cleaned up, you might want to re-structure the code
