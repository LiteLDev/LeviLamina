#ifndef SRC_NODE_EXTERNAL_REFERENCE_H_
#define SRC_NODE_EXTERNAL_REFERENCE_H_

#if defined(NODE_WANT_INTERNALS) && NODE_WANT_INTERNALS

#include <cinttypes>
#include <vector>
#include "v8.h"

namespace node {

// This class manages the external references from the V8 heap
// to the C++ addresses in Node.js.
class ExternalReferenceRegistry {
 public:
  ExternalReferenceRegistry();

#define ALLOWED_EXTERNAL_REFERENCE_TYPES(V)                                    \
  V(v8::FunctionCallback)                                                      \
  V(v8::AccessorGetterCallback)                                                \
  V(v8::AccessorSetterCallback)                                                \
  V(v8::AccessorNameGetterCallback)                                            \
  V(v8::AccessorNameSetterCallback)                                            \
  V(v8::GenericNamedPropertyDefinerCallback)                                   \
  V(v8::GenericNamedPropertyDeleterCallback)                                   \
  V(v8::GenericNamedPropertyEnumeratorCallback)                                \
  V(v8::GenericNamedPropertyQueryCallback)                                     \
  V(v8::GenericNamedPropertySetterCallback)

#define V(ExternalReferenceType)                                               \
  void Register(ExternalReferenceType addr) { RegisterT(addr); }
  ALLOWED_EXTERNAL_REFERENCE_TYPES(V)
#undef V

  // This can be called only once.
  const std::vector<intptr_t>& external_references();

  bool is_empty() { return external_references_.empty(); }

 private:
  template <typename T>
  void RegisterT(T* address) {
    external_references_.push_back(reinterpret_cast<intptr_t>(address));
  }
  bool is_finalized_ = false;
  std::vector<intptr_t> external_references_;
};

#define EXTERNAL_REFERENCE_BINDING_LIST_BASE(V)                                \
  V(async_wrap)                                                                \
  V(binding)                                                                   \
  V(blob)                                                                      \
  V(buffer)                                                                    \
  V(contextify)                                                                \
  V(credentials)                                                               \
  V(env_var)                                                                   \
  V(errors)                                                                    \
  V(fs)                                                                        \
  V(fs_dir)                                                                    \
  V(fs_event_wrap)                                                             \
  V(handle_wrap)                                                               \
  V(heap_utils)                                                                \
  V(messaging)                                                                 \
  V(native_module)                                                             \
  V(performance)                                                               \
  V(process_methods)                                                           \
  V(process_object)                                                            \
  V(report)                                                                    \
  V(task_queue)                                                                \
  V(tcp_wrap)                                                                  \
  V(tty_wrap)                                                                  \
  V(url)                                                                       \
  V(util)                                                                      \
  V(pipe_wrap)                                                                 \
  V(serdes)                                                                    \
  V(string_decoder)                                                            \
  V(stream_wrap)                                                               \
  V(signal_wrap)                                                               \
  V(trace_events)                                                              \
  V(timers)                                                                    \
  V(types)                                                                     \
  V(uv)                                                                        \
  V(v8)                                                                        \
  V(zlib)                                                                      \
  V(worker)

#if NODE_HAVE_I18N_SUPPORT
#define EXTERNAL_REFERENCE_BINDING_LIST_I18N(V) V(icu)
#else
#define EXTERNAL_REFERENCE_BINDING_LIST_I18N(V)
#endif  // NODE_HAVE_I18N_SUPPORT

#if HAVE_INSPECTOR
#define EXTERNAL_REFERENCE_BINDING_LIST_INSPECTOR(V)                           \
  V(inspector)                                                                 \
  V(profiler)
#else
#define EXTERNAL_REFERENCE_BINDING_LIST_INSPECTOR(V)
#endif  // HAVE_INSPECTOR

#if HAVE_DTRACE || HAVE_ETW
#define EXTERNAL_REFERENCE_BINDING_LIST_DTRACE(V) V(dtrace)
#else
#define EXTERNAL_REFERENCE_BINDING_LIST_DTRACE(V)
#endif

#define EXTERNAL_REFERENCE_BINDING_LIST(V)                                     \
  EXTERNAL_REFERENCE_BINDING_LIST_BASE(V)                                      \
  EXTERNAL_REFERENCE_BINDING_LIST_INSPECTOR(V)                                 \
  EXTERNAL_REFERENCE_BINDING_LIST_I18N(V)                                      \
  EXTERNAL_REFERENCE_BINDING_LIST_DTRACE(V)

}  // namespace node

// Declare all the external reference registration functions here,
// and define them later with #NODE_MODULE_EXTERNAL_REFERENCE(modname, func);
#define V(modname)                                                             \
  void _register_external_reference_##modname(                                 \
      node::ExternalReferenceRegistry* registry);
EXTERNAL_REFERENCE_BINDING_LIST(V)
#undef V

#define NODE_MODULE_EXTERNAL_REFERENCE(modname, func)                          \
  void _register_external_reference_##modname(                                 \
      node::ExternalReferenceRegistry* registry) {                             \
    func(registry);                                                            \
  }
#endif  // defined(NODE_WANT_INTERNALS) && NODE_WANT_INTERNALS
#endif  // SRC_NODE_EXTERNAL_REFERENCE_H_
