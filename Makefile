.PHONY: clean All

All:
	@echo "----------Building project:[ 20201114-aria-perimetru - Debug ]----------"
	@cd "20201114-1" && "$(MAKE)" -f  "20201114-aria-perimetru.mk"
clean:
	@echo "----------Cleaning project:[ 20201114-aria-perimetru - Debug ]----------"
	@cd "20201114-1" && "$(MAKE)" -f  "20201114-aria-perimetru.mk" clean
