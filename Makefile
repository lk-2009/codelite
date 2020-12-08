.PHONY: clean All

All:
	@echo "----------Building project:[ 20201205_ex8 - Debug ]----------"
	@cd "20201205_ex8" && "$(MAKE)" -f  "20201205_ex8.mk"
clean:
	@echo "----------Cleaning project:[ 20201205_ex8 - Debug ]----------"
	@cd "20201205_ex8" && "$(MAKE)" -f  "20201205_ex8.mk" clean
