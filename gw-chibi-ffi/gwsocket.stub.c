/* Automatically generated by chibi-ffi; version: 0.4 */

#include <chibi/eval.h>

#include "chibi/eval.h"
/*
types: ()
enums: ()
*/

sexp sexp_set_buf_stub (sexp ctx, sexp self, sexp_sint_t n, sexp arg0) {
  sexp res;
  if (! sexp_stringp(arg0))
    return sexp_type_exception(ctx, self, SEXP_STRING, arg0);
  res = ((set_buf(sexp_string_data(arg0))), SEXP_VOID);
  return res;
}

sexp sexp_send_to_page_stub (sexp ctx, sexp self, sexp_sint_t n, sexp arg0) {
  sexp res;
  if (! sexp_stringp(arg0))
    return sexp_type_exception(ctx, self, SEXP_STRING, arg0);
  res = ((send_to_page(sexp_string_data(arg0))), SEXP_VOID);
  return res;
}

sexp sexp_get_buf_stub (sexp ctx, sexp self, sexp_sint_t n) {
  sexp res;
  res = sexp_c_string(ctx, get_buf(), -1);
  return res;
}

sexp sexp_read_from_page_stub (sexp ctx, sexp self, sexp_sint_t n) {
  sexp res;
  res = ((read_from_page()), SEXP_VOID);
  return res;
}

sexp sexp_gwinit_stub (sexp ctx, sexp self, sexp_sint_t n) {
  sexp res;
  res = ((gwinit()), SEXP_VOID);
  return res;
}


sexp sexp_init_library (sexp ctx, sexp self, sexp_sint_t n, sexp env, const char* version, const sexp_abi_identifier_t abi) {
  sexp_gc_var3(name, tmp, op);
  if (!(sexp_version_compatible(ctx, version, sexp_version)
        && sexp_abi_compatible(ctx, abi, SEXP_ABI_IDENTIFIER)))
    return SEXP_ABI_ERROR;
  sexp_gc_preserve3(ctx, name, tmp, op);
  op = sexp_define_foreign(ctx, env, "set_buf", 1, sexp_set_buf_stub);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = SEXP_VOID;
    sexp_opcode_arg1_type(op) = sexp_make_fixnum(SEXP_STRING);
  }
  op = sexp_define_foreign(ctx, env, "send_to_page", 1, sexp_send_to_page_stub);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = SEXP_VOID;
    sexp_opcode_arg1_type(op) = sexp_make_fixnum(SEXP_STRING);
  }
  op = sexp_define_foreign(ctx, env, "get_buf", 0, sexp_get_buf_stub);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = sexp_make_fixnum(SEXP_STRING);
  }
  op = sexp_define_foreign(ctx, env, "read_from_page", 0, sexp_read_from_page_stub);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = SEXP_VOID;
  }
  op = sexp_define_foreign(ctx, env, "gwinit", 0, sexp_gwinit_stub);
  if (sexp_opcodep(op)) {
    sexp_opcode_return_type(op) = SEXP_VOID;
  }
  sexp_gc_release3(ctx);
  return SEXP_VOID;
}

