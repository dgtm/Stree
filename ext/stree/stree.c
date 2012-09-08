#include <ruby.h>

static VALUE bye(VALUE mod)
{
	return rb_str_new2("Good Bye!");
}

void Init_stree()
{
	VALUE mStree = rb_define_module("Stree");
	rb_define_singleton_method(mStree, "bye", bye, 0);
}
