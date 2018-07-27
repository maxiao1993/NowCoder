
struct foo_object;
struct i_foo{void(*foobar)(void*);};

struct foobar;
struct i_foo*foobar_foo(void);
struct foobar*foobar_creat(void);
void foobar_release(struct foobar*);

struct foo_object*foo_create(struct i_foo *iface,void *data);
void foo_release(struct foo_object*);
void foo_dosomething(struct foo_object*);
