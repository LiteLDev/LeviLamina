#ifndef SRC_CRYPTO_CRYPTO_CONTEXT_H_
#define SRC_CRYPTO_CRYPTO_CONTEXT_H_

#if defined(NODE_WANT_INTERNALS) && NODE_WANT_INTERNALS

#include "crypto/crypto_util.h"
#include "base_object.h"
#include "env.h"
#include "memory_tracker.h"
#include "v8.h"

namespace node {
namespace crypto {
// A maxVersion of 0 means "any", but OpenSSL may support TLS versions that
// Node.js doesn't, so pin the max to what we do support.
constexpr int kMaxSupportedVersion = TLS1_3_VERSION;

void GetRootCertificates(
    const v8::FunctionCallbackInfo<v8::Value>& args);

void IsExtraRootCertsFileLoaded(
    const v8::FunctionCallbackInfo<v8::Value>& args);

X509_STORE* NewRootCertStore();

BIOPointer LoadBIO(Environment* env, v8::Local<v8::Value> v);

class SecureContext final : public BaseObject {
 public:
  using GetSessionCb = SSL_SESSION* (*)(SSL*, const unsigned char*, int, int*);
  using KeylogCb = void (*)(const SSL*, const char*);
  using NewSessionCb = int (*)(SSL*, SSL_SESSION*);
  using SelectSNIContextCb = int (*)(SSL*, int*, void*);

  ~SecureContext() override;

  static bool HasInstance(Environment* env, const v8::Local<v8::Value>& value);
  static v8::Local<v8::FunctionTemplate> GetConstructorTemplate(
      Environment* env);
  static void Initialize(Environment* env, v8::Local<v8::Object> target);
  static SecureContext* Create(Environment* env);

  SSL_CTX* operator*() const { return ctx_.get(); }

  SSL_CTX* ssl_ctx() const { return ctx_.get(); }

  SSLPointer CreateSSL();

  void SetGetSessionCallback(GetSessionCb cb);
  void SetKeylogCallback(KeylogCb cb);
  void SetNewSessionCallback(NewSessionCb cb);
  void SetSelectSNIContextCallback(SelectSNIContextCb cb);

  // TODO(joyeecheung): track the memory used by OpenSSL types
  SET_NO_MEMORY_INFO()
  SET_MEMORY_INFO_NAME(SecureContext)
  SET_SELF_SIZE(SecureContext)

  SSLCtxPointer ctx_;
  X509Pointer cert_;
  X509Pointer issuer_;
#ifndef OPENSSL_NO_ENGINE
  bool client_cert_engine_provided_ = false;
  EnginePointer private_key_engine_;
#endif  // !OPENSSL_NO_ENGINE

  static const int kMaxSessionSize = 10 * 1024;

  // See TicketKeyCallback
  static const int kTicketKeyReturnIndex = 0;
  static const int kTicketKeyHMACIndex = 1;
  static const int kTicketKeyAESIndex = 2;
  static const int kTicketKeyNameIndex = 3;
  static const int kTicketKeyIVIndex = 4;

  unsigned char ticket_key_name_[16];
  unsigned char ticket_key_aes_[16];
  unsigned char ticket_key_hmac_[16];

 protected:
  // OpenSSL structures are opaque. This is sizeof(SSL_CTX) for OpenSSL 1.1.1b:
  static const int64_t kExternalSize = 1024;

  static void New(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void Init(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void SetKey(const v8::FunctionCallbackInfo<v8::Value>& args);
#ifndef OPENSSL_NO_ENGINE
  static void SetEngineKey(const v8::FunctionCallbackInfo<v8::Value>& args);
#endif  // !OPENSSL_NO_ENGINE
  static void SetCert(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void AddCACert(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void AddCRL(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void AddRootCerts(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void SetCipherSuites(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void SetCiphers(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void SetSigalgs(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void SetECDHCurve(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void SetDHParam(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void SetOptions(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void SetSessionIdContext(
      const v8::FunctionCallbackInfo<v8::Value>& args);
  static void SetSessionTimeout(
      const v8::FunctionCallbackInfo<v8::Value>& args);
  static void SetMinProto(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void SetMaxProto(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetMinProto(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void GetMaxProto(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void Close(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void LoadPKCS12(const v8::FunctionCallbackInfo<v8::Value>& args);
#ifndef OPENSSL_NO_ENGINE
  static void SetClientCertEngine(
      const v8::FunctionCallbackInfo<v8::Value>& args);
#endif  // !OPENSSL_NO_ENGINE
  static void GetTicketKeys(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void SetTicketKeys(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void SetFreeListLength(
      const v8::FunctionCallbackInfo<v8::Value>& args);
  static void EnableTicketKeyCallback(
      const v8::FunctionCallbackInfo<v8::Value>& args);
  static void CtxGetter(const v8::FunctionCallbackInfo<v8::Value>& info);

  template <bool primary>
  static void GetCertificate(const v8::FunctionCallbackInfo<v8::Value>& args);

  static int TicketKeyCallback(SSL* ssl,
                               unsigned char* name,
                               unsigned char* iv,
                               EVP_CIPHER_CTX* ectx,
                               HMAC_CTX* hctx,
                               int enc);

  static int TicketCompatibilityCallback(SSL* ssl,
                                         unsigned char* name,
                                         unsigned char* iv,
                                         EVP_CIPHER_CTX* ectx,
                                         HMAC_CTX* hctx,
                                         int enc);

  SecureContext(Environment* env, v8::Local<v8::Object> wrap);
  void Reset();
};

}  // namespace crypto
}  // namespace node

#endif  // defined(NODE_WANT_INTERNALS) && NODE_WANT_INTERNALS
#endif  // SRC_CRYPTO_CRYPTO_CONTEXT_H_
