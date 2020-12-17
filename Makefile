.PHONY: clean All

All:
	@echo "----------Building project:[ 20201212-ex4 - Debug ]----------"
	@cd "20201212-ex4" && "$(MAKE)" -f  "20201212-ex4.mk"
clean:
	@echo "----------Cleaning project:[ 20201212-ex4 - Debug ]----------"
	@cd "20201212-ex4" && "$(MAKE)" -f  "20201212-ex4.mk" clean
