#ifndef SRC_NODE_PROCESS_H_
#define SRC_NODE_PROCESS_H_

#if defined(NODE_WANT_INTERNALS) && NODE_WANT_INTERNALS

#include "node_snapshotable.h"
#include "v8-fast-api-calls.h"
#include "v8.h"

namespace node {

class Environment;
class MemoryTracker;
class ExternalReferenceRegistry;

v8::MaybeLocal<v8::Object> CreateEnvVarProxy(v8::Local<v8::Context> context,
                                             v8::Isolate* isolate);

// Most of the time, it's best to use `console.error` to write
// to the process.stderr stream.  However, in some cases, such as
// when debugging the stream.Writable class or the process.nextTick
// function, it is useful to bypass JavaScript entirely.
void RawDebug(const v8::FunctionCallbackInfo<v8::Value>& args);

v8::MaybeLocal<v8::Value> ProcessEmit(Environment* env,
                                      const char* event,
                                      v8::Local<v8::Value> message);

v8::Maybe<bool> ProcessEmitWarningGeneric(Environment* env,
                                          const char* warning,
                                          const char* type = nullptr,
                                          const char* code = nullptr);

template <typename... Args>
inline v8::Maybe<bool> ProcessEmitWarning(Environment* env,
                                          const char* fmt,
                                          Args&&... args);
v8::Maybe<bool> ProcessEmitExperimentalWarning(Environment* env,
                                              const char* warning);
v8::Maybe<bool> ProcessEmitDeprecationWarning(Environment* env,
                                              const char* warning,
                                              const char* deprecation_code);

v8::MaybeLocal<v8::Object> CreateProcessObject(Environment* env);
void PatchProcessObject(const v8::FunctionCallbackInfo<v8::Value>& args);

namespace process {
class BindingData : public SnapshotableObject {
 public:
  void AddMethods();
  static void RegisterExternalReferences(ExternalReferenceRegistry* registry);

  SERIALIZABLE_OBJECT_METHODS()
  static constexpr FastStringKey type_name{"node::process::BindingData"};
  static constexpr EmbedderObjectType type_int =
      EmbedderObjectType::k_process_binding_data;

  BindingData(Environment* env, v8::Local<v8::Object> object);

  void MemoryInfo(MemoryTracker* tracker) const override;
  SET_MEMORY_INFO_NAME(BindingData)
  SET_SELF_SIZE(BindingData)

  static BindingData* FromV8Value(v8::Local<v8::Value> receiver);
  static void NumberImpl(BindingData* receiver);

  static void FastNumber(v8::Local<v8::Value> receiver) {
    NumberImpl(FromV8Value(receiver));
  }

  static void SlowNumber(const v8::FunctionCallbackInfo<v8::Value>& args);

  static void BigIntImpl(BindingData* receiver);

  static void FastBigInt(v8::Local<v8::Value> receiver) {
    BigIntImpl(FromV8Value(receiver));
  }

  static void SlowBigInt(const v8::FunctionCallbackInfo<v8::Value>& args);

 private:
  static constexpr size_t kBufferSize =
      std::max(sizeof(uint64_t), sizeof(uint32_t) * 3);
  v8::Global<v8::ArrayBuffer> array_buffer_;
  std::shared_ptr<v8::BackingStore> backing_store_;

  // These need to be static so that we have their addresses available to
  // register as external references in the snapshot at environment creation
  // time.
  static v8::CFunction fast_number_;
  static v8::CFunction fast_bigint_;
};

}  // namespace process
}  // namespace node
#endif  // defined(NODE_WANT_INTERNALS) && NODE_WANT_INTERNALS
#endif  // SRC_NODE_PROCESS_H_
