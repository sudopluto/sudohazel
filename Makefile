.PHONY: run
run:
	meson setup builddir
	meson compile -C builddir
	./builddir/sandbox/sandboxapp
