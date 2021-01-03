.PHONY: clean All

All:
	@echo "----------Building project:[ 20201219_9 - Debug ]----------"
	@cd "20201219_9" && "$(MAKE)" -f  "20201219_9.mk"
clean:
	@echo "----------Cleaning project:[ 20201219_9 - Debug ]----------"
	@cd "20201219_9" && "$(MAKE)" -f  "20201219_9.mk" clean
