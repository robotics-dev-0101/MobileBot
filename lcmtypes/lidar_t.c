// THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
// BY HAND!!
//
// Generated by lcm-gen

#include <string.h>
#include "lidar_t.h"

static int __lidar_t_hash_computed;
static uint64_t __lidar_t_hash;

uint64_t __lidar_t_hash_recursive(const __lcm_hash_ptr *p)
{
    const __lcm_hash_ptr *fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __lidar_t_get_hash)
            return 0;

    __lcm_hash_ptr cp;
    cp.parent =  p;
    cp.v = __lidar_t_get_hash;
    (void) cp;

    uint64_t hash = (uint64_t)0xc4ee2dc3cd282b67LL
         + __int64_t_hash_recursive(&cp)
         + __int32_t_hash_recursive(&cp)
         + __float_hash_recursive(&cp)
         + __float_hash_recursive(&cp)
         + __int64_t_hash_recursive(&cp)
         + __float_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __lidar_t_get_hash(void)
{
    if (!__lidar_t_hash_computed) {
        __lidar_t_hash = (int64_t)__lidar_t_hash_recursive(NULL);
        __lidar_t_hash_computed = 1;
    }

    return __lidar_t_hash;
}

int __lidar_t_encode_array(void *buf, int offset, int maxlen, const lidar_t *p, int elements)
{
    int pos = 0, element;
    int thislen;

    for (element = 0; element < elements; element++) {

        thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].utime), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].num_ranges), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __float_encode_array(buf, offset + pos, maxlen - pos, p[element].ranges, p[element].num_ranges);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __float_encode_array(buf, offset + pos, maxlen - pos, p[element].thetas, p[element].num_ranges);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, p[element].times, p[element].num_ranges);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __float_encode_array(buf, offset + pos, maxlen - pos, p[element].intensities, p[element].num_ranges);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int lidar_t_encode(void *buf, int offset, int maxlen, const lidar_t *p)
{
    int pos = 0, thislen;
    int64_t hash = __lidar_t_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __lidar_t_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int __lidar_t_encoded_array_size(const lidar_t *p, int elements)
{
    int size = 0, element;
    for (element = 0; element < elements; element++) {

        size += __int64_t_encoded_array_size(&(p[element].utime), 1);

        size += __int32_t_encoded_array_size(&(p[element].num_ranges), 1);

        size += __float_encoded_array_size(p[element].ranges, p[element].num_ranges);

        size += __float_encoded_array_size(p[element].thetas, p[element].num_ranges);

        size += __int64_t_encoded_array_size(p[element].times, p[element].num_ranges);

        size += __float_encoded_array_size(p[element].intensities, p[element].num_ranges);

    }
    return size;
}

int lidar_t_encoded_size(const lidar_t *p)
{
    return 8 + __lidar_t_encoded_array_size(p, 1);
}

size_t lidar_t_struct_size(void)
{
    return sizeof(lidar_t);
}

int lidar_t_num_fields(void)
{
    return 6;
}

int lidar_t_get_field(const lidar_t *p, int i, lcm_field_t *f)
{
    if (0 > i || i >= lidar_t_num_fields())
        return 1;
    
    switch (i) {
    
        case 0: {
            f->name = "utime";
            f->type = LCM_FIELD_INT64_T;
            f->typestr = "int64_t";
            f->num_dim = 0;
            f->data = (void *) &p->utime;
            return 0;
        }
        
        case 1: {
            f->name = "num_ranges";
            f->type = LCM_FIELD_INT32_T;
            f->typestr = "int32_t";
            f->num_dim = 0;
            f->data = (void *) &p->num_ranges;
            return 0;
        }
        
        case 2: {
            f->name = "ranges";
            f->type = LCM_FIELD_FLOAT;
            f->typestr = "float";
            f->num_dim = 1;
            f->dim_size[0] = p->num_ranges;
            f->dim_is_variable[0] = 1;
            f->data = (void *) &p->ranges;
            return 0;
        }
        
        case 3: {
            f->name = "thetas";
            f->type = LCM_FIELD_FLOAT;
            f->typestr = "float";
            f->num_dim = 1;
            f->dim_size[0] = p->num_ranges;
            f->dim_is_variable[0] = 1;
            f->data = (void *) &p->thetas;
            return 0;
        }
        
        case 4: {
            f->name = "times";
            f->type = LCM_FIELD_INT64_T;
            f->typestr = "int64_t";
            f->num_dim = 1;
            f->dim_size[0] = p->num_ranges;
            f->dim_is_variable[0] = 1;
            f->data = (void *) &p->times;
            return 0;
        }
        
        case 5: {
            f->name = "intensities";
            f->type = LCM_FIELD_FLOAT;
            f->typestr = "float";
            f->num_dim = 1;
            f->dim_size[0] = p->num_ranges;
            f->dim_is_variable[0] = 1;
            f->data = (void *) &p->intensities;
            return 0;
        }
        
        default:
            return 1;
    }
}

const lcm_type_info_t *lidar_t_get_type_info(void)
{
    static int init = 0;
    static lcm_type_info_t typeinfo;
    if (!init) {
        typeinfo.encode         = (lcm_encode_t) lidar_t_encode;
        typeinfo.decode         = (lcm_decode_t) lidar_t_decode;
        typeinfo.decode_cleanup = (lcm_decode_cleanup_t) lidar_t_decode_cleanup;
        typeinfo.encoded_size   = (lcm_encoded_size_t) lidar_t_encoded_size;
        typeinfo.struct_size    = (lcm_struct_size_t)  lidar_t_struct_size;
        typeinfo.num_fields     = (lcm_num_fields_t) lidar_t_num_fields;
        typeinfo.get_field      = (lcm_get_field_t) lidar_t_get_field;
        typeinfo.get_hash       = (lcm_get_hash_t) __lidar_t_get_hash;
    }
    
    return &typeinfo;
}
int __lidar_t_decode_array(const void *buf, int offset, int maxlen, lidar_t *p, int elements)
{
    int pos = 0, thislen, element;

    for (element = 0; element < elements; element++) {

        thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].utime), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].num_ranges), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        p[element].ranges = (float*) lcm_malloc(sizeof(float) * p[element].num_ranges);
        thislen = __float_decode_array(buf, offset + pos, maxlen - pos, p[element].ranges, p[element].num_ranges);
        if (thislen < 0) return thislen; else pos += thislen;

        p[element].thetas = (float*) lcm_malloc(sizeof(float) * p[element].num_ranges);
        thislen = __float_decode_array(buf, offset + pos, maxlen - pos, p[element].thetas, p[element].num_ranges);
        if (thislen < 0) return thislen; else pos += thislen;

        p[element].times = (int64_t*) lcm_malloc(sizeof(int64_t) * p[element].num_ranges);
        thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, p[element].times, p[element].num_ranges);
        if (thislen < 0) return thislen; else pos += thislen;

        p[element].intensities = (float*) lcm_malloc(sizeof(float) * p[element].num_ranges);
        thislen = __float_decode_array(buf, offset + pos, maxlen - pos, p[element].intensities, p[element].num_ranges);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __lidar_t_decode_array_cleanup(lidar_t *p, int elements)
{
    int element;
    for (element = 0; element < elements; element++) {

        __int64_t_decode_array_cleanup(&(p[element].utime), 1);

        __int32_t_decode_array_cleanup(&(p[element].num_ranges), 1);

        __float_decode_array_cleanup(p[element].ranges, p[element].num_ranges);
        if (p[element].ranges) free(p[element].ranges);

        __float_decode_array_cleanup(p[element].thetas, p[element].num_ranges);
        if (p[element].thetas) free(p[element].thetas);

        __int64_t_decode_array_cleanup(p[element].times, p[element].num_ranges);
        if (p[element].times) free(p[element].times);

        __float_decode_array_cleanup(p[element].intensities, p[element].num_ranges);
        if (p[element].intensities) free(p[element].intensities);

    }
    return 0;
}

int lidar_t_decode(const void *buf, int offset, int maxlen, lidar_t *p)
{
    int pos = 0, thislen;
    int64_t hash = __lidar_t_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __lidar_t_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int lidar_t_decode_cleanup(lidar_t *p)
{
    return __lidar_t_decode_array_cleanup(p, 1);
}

int __lidar_t_clone_array(const lidar_t *p, lidar_t *q, int elements)
{
    int element;
    for (element = 0; element < elements; element++) {

        __int64_t_clone_array(&(p[element].utime), &(q[element].utime), 1);

        __int32_t_clone_array(&(p[element].num_ranges), &(q[element].num_ranges), 1);

        q[element].ranges = (float*) lcm_malloc(sizeof(float) * q[element].num_ranges);
        __float_clone_array(p[element].ranges, q[element].ranges, p[element].num_ranges);

        q[element].thetas = (float*) lcm_malloc(sizeof(float) * q[element].num_ranges);
        __float_clone_array(p[element].thetas, q[element].thetas, p[element].num_ranges);

        q[element].times = (int64_t*) lcm_malloc(sizeof(int64_t) * q[element].num_ranges);
        __int64_t_clone_array(p[element].times, q[element].times, p[element].num_ranges);

        q[element].intensities = (float*) lcm_malloc(sizeof(float) * q[element].num_ranges);
        __float_clone_array(p[element].intensities, q[element].intensities, p[element].num_ranges);

    }
    return 0;
}

lidar_t *lidar_t_copy(const lidar_t *p)
{
    lidar_t *q = (lidar_t*) malloc(sizeof(lidar_t));
    __lidar_t_clone_array(p, q, 1);
    return q;
}

void lidar_t_destroy(lidar_t *p)
{
    __lidar_t_decode_array_cleanup(p, 1);
    free(p);
}

int lidar_t_publish(lcm_t *lc, const char *channel, const lidar_t *p)
{
      int max_data_size = lidar_t_encoded_size (p);
      uint8_t *buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = lidar_t_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = lcm_publish (lc, channel, buf, data_size);
      free (buf);
      return status;
}

struct _lidar_t_subscription_t {
    lidar_t_handler_t user_handler;
    void *userdata;
    lcm_subscription_t *lc_h;
};
static
void lidar_t_handler_stub (const lcm_recv_buf_t *rbuf,
                            const char *channel, void *userdata)
{
    int status;
    lidar_t p;
    memset(&p, 0, sizeof(lidar_t));
    status = lidar_t_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding lidar_t!!!\n", status);
        return;
    }

    lidar_t_subscription_t *h = (lidar_t_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    lidar_t_decode_cleanup (&p);
}

lidar_t_subscription_t* lidar_t_subscribe (lcm_t *lcm,
                    const char *channel,
                    lidar_t_handler_t f, void *userdata)
{
    lidar_t_subscription_t *n = (lidar_t_subscription_t*)
                       malloc(sizeof(lidar_t_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->lc_h = lcm_subscribe (lcm, channel,
                                 lidar_t_handler_stub, n);
    if (n->lc_h == NULL) {
        fprintf (stderr,"couldn't reg lidar_t LCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int lidar_t_subscription_set_queue_capacity (lidar_t_subscription_t* subs,
                              int num_messages)
{
    return lcm_subscription_set_queue_capacity (subs->lc_h, num_messages);
}

int lidar_t_unsubscribe(lcm_t *lcm, lidar_t_subscription_t* hid)
{
    int status = lcm_unsubscribe (lcm, hid->lc_h);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe lidar_t_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}
