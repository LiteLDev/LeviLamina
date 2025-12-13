#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/AdapterType.h"
#include "mc/external/rtc/WeakPtr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Port; }
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class ClockInterface; }
namespace rtc { class IPAddress; }
namespace rtc { class MessageDigest; }
namespace rtc { class SocketAddress; }
namespace rtc { class SocketServer; }
namespace rtc { struct PacketInfo; }
namespace webrtc { class SctpDataChannelControllerInterface; }
// clang-format on

namespace rtc {
// inner types
enum : int {
    Trunc = 16711681,
};

// functions
// NOLINTBEGIN
MCNAPI int64 ASN1TimeToSec(uchar const* s, uint64 length, bool long_format);

MCNAPI ::std::string AdapterTypeToString(::rtc::AdapterType type);

MCNAPI uint64 ComputeDigest(::std::string_view alg, void const* input, uint64 in_len, void* output, uint64 out_len);

MCNAPI uint64
ComputeDigest(::rtc::MessageDigest* digest, void const* input, uint64 in_len, void* output, uint64 out_len);

MCNAPI uint64 ComputeHmac(
    ::std::string_view alg,
    void const*        key,
    uint64             key_len,
    void const*        input,
    uint64             in_len,
    void*              output,
    uint64             out_len
);

MCNAPI uint64 ComputeHmac(
    ::rtc::MessageDigest* digest,
    void const*           key,
    uint64                key_len,
    void const*           input,
    uint64                in_len,
    void*                 output,
    uint64                out_len
);

MCNAPI void CopySocketInformationToPacketInfo(
    uint64                          packet_size_bytes,
    ::rtc::AsyncPacketSocket const& socket_from,
    bool                            is_connectionless,
    ::rtc::PacketInfo*              info
);

MCNAPI ::std::unique_ptr<::rtc::SocketServer> CreateDefaultSocketServer();

MCNAPI uint CreateRandomId();

MCNAPI uint64 CreateRandomId64();

MCNAPI uint CreateRandomNonZeroId();

MCNAPI bool CreateRandomString(uint64 len, ::std::string* str);

MCNAPI ::std::string CreateRandomString(uint64 len);

MCNAPI ::std::string CreateRandomUuid();

MCNAPI ulong CurrentThreadId();

MCNAPI ulong CurrentThreadRef();

MCNAPI ::rtc::SocketAddress EmptySocketAddressWithFamily(int family);

MCNAPI void ExplicitZeroMemory(void* ptr, uint64 len);

MCNAPI ::rtc::IPAddress GetAnyIP(int family);

MCNAPI double GetNextMovingAverage(double prev_average, double cur, double ratio);

MCNAPI uint GetPrefix(::_IP_ADAPTER_PREFIX_XP* prefixlist, ::rtc::IPAddress const& ip, ::rtc::IPAddress* prefix);

MCNAPI bool GetSrtpKeyAndSaltLengths(int crypto_suite, int* key_length, int* salt_length);

MCNAPI int IPAddressPrecedence(::rtc::IPAddress const& ip);

MCNAPI bool IPFromAddrInfo(::addrinfo* info, ::rtc::IPAddress* out);

MCNAPI bool IPFromString(::std::string_view str, ::rtc::IPAddress* out);

MCNAPI bool IPIs6Bone(::rtc::IPAddress const& ip);

MCNAPI bool IPIs6To4(::rtc::IPAddress const& ip);

MCNAPI bool IPIsAny(::rtc::IPAddress const& ip);

MCNAPI bool IPIsLinkLocal(::rtc::IPAddress const& ip);

MCNAPI bool IPIsLoopback(::rtc::IPAddress const& ip);

MCNAPI bool IPIsMacBased(::rtc::IPAddress const& ip);

MCNAPI bool IPIsPrivate(::rtc::IPAddress const& ip);

MCNAPI bool IPIsPrivateNetwork(::rtc::IPAddress const& ip);

MCNAPI bool IPIsSharedNetwork(::rtc::IPAddress const& ip);

MCNAPI bool IPIsSiteLocal(::rtc::IPAddress const& ip);

MCNAPI bool IPIsTeredo(::rtc::IPAddress const& ip);

MCNAPI bool IPIsULA(::rtc::IPAddress const& ip);

MCNAPI bool IPIsUnspec(::rtc::IPAddress const& ip);

MCNAPI bool IPIsV4Compatibility(::rtc::IPAddress const& ip);

MCNAPI bool IPIsV4Mapped(::rtc::IPAddress const& ip);

MCNAPI bool InitRandom(int seed);

MCNAPI bool InitRandom(char const* seed, uint64 len);

MCNAPI bool InitializeSSL();

MCNAPI bool IsFips180DigestAlgorithm(::std::string_view alg);

MCNAPI bool IsGcmCryptoSuite(int crypto_suite);

MCNAPI bool IsThreadRefEqual(ulong const& a, ulong const& b);

MCNAPI ::std::string MakeNetworkKey(::std::string_view name, ::rtc::IPAddress const& prefix, int prefix_length);

MCNAPI void SetCurrentThreadName(char const* name);

MCNAPI bool SocketAddressFromSockAddrStorage(::sockaddr_storage const& addr, ::rtc::SocketAddress* out);

MCNAPI ::std::string SrtpCryptoSuiteToName(int crypto_suite);

MCNAPI ::std::string StringFormat(char const*, ...);

MCNAPI int64 SystemTimeMillis();

MCNAPI int64 SystemTimeNanos();

MCNAPI uint Time32();

MCNAPI int64 TimeAfter(int64 elapsed);

MCNAPI int64 TimeDiff(int64 later, int64 earlier);

MCNAPI int64 TimeMicros();

MCNAPI int64 TimeMillis();

MCNAPI int64 TimeNanos();

MCNAPI int64 TimeUTCMicros();

MCNAPI int64 TimeUTCMillis();

MCNAPI int64 TmToSeconds(::tm const& tm);

MCNAPI ::std::string ToHex(int i);

MCNAPI ::std::string ToString(bool b);

MCNAPI ::std::string ToString(long double d);

MCNAPI ::std::string ToString(double d);

MCNAPI ::std::string ToString(ushort s);

MCNAPI ::std::string ToString(int64 s);

MCNAPI ::std::string ToString(uint64 s);

MCNAPI ::std::string ToString(ulong s);

MCNAPI ::std::string ToString(long s);

MCNAPI ::std::string ToString(::std::string_view s);

MCNAPI ::std::string ToString(uint s);

MCNAPI ::std::string ToString(int s);

MCNAPI ::std::string TransformAlpnProtocols(::std::vector<::std::string> const& alpn_protocols);

MCNAPI ::rtc::IPAddress TruncateIP(::rtc::IPAddress const& ip, int length);

MCNAPI uint UpdateCrc32(uint start, void const* buf, uint64 len);

MCNAPI int64 WinUwpSystemTimeNanos();

MCNAPI uint64 hex_decode_with_delimiter(::rtc::ArrayView<char> cbuffer, ::std::string_view source, char delimiter);

MCNAPI ::std::string hex_encode(::std::string_view str);

MCNAPI ::std::string hex_encode_with_delimiter(::std::string_view source, char delimiter);

MCNAPI char const* inet_ntop(int af, void const* src, char* dst, int size);

MCNAPI int inet_pton(int af, ::std::string_view src, void* dst);

MCNAPI bool operator!=(::rtc::WeakPtr<::webrtc::SctpDataChannelControllerInterface> const& weak_ptr, nullptr_t);

MCNAPI bool operator!=(::rtc::WeakPtr<::cricket::Port> const& weak_ptr, nullptr_t);

MCNAPI bool operator==(::rtc::WeakPtr<::webrtc::SctpDataChannelControllerInterface> const& weak_ptr, nullptr_t);

MCNAPI bool operator==(::rtc::WeakPtr<::cricket::Port> const& weak_ptr, nullptr_t);

MCNAPI ::std::vector<::std::string_view> split(::std::string_view source, char delimiter);

MCNAPI uint64 tokenize(::std::string_view source, char delimiter, ::std::vector<::std::string>* fields);

MCNAPI bool tokenize_first(::std::string_view source, char delimiter, ::std::string* token, ::std::string* rest);

MCNAPI char const* win32_inet_ntop(int af, void const* src, char* dst, int size);

MCNAPI int win32_inet_pton(int af, char const* src, void* dst);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::add_lvalue_reference_t<char const[]> DIGEST_MD5();

MCNAPI ::std::add_lvalue_reference_t<char const[]> DIGEST_SHA_1();

MCNAPI ::std::add_lvalue_reference_t<char const[]> DIGEST_SHA_224();

MCNAPI ::std::add_lvalue_reference_t<char const[]> DIGEST_SHA_256();

MCNAPI ::std::add_lvalue_reference_t<char const[]> DIGEST_SHA_384();

MCNAPI ::std::add_lvalue_reference_t<char const[]> DIGEST_SHA_512();

MCNAPI ::rtc::ClockInterface*& g_clock();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCsAeadAes128Gcm();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCsAeadAes256Gcm();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCsAesCm128HmacSha1_32();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCsAesCm128HmacSha1_80();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kPemTypeCertificate();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kPemTypeEcPrivateKey();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kPemTypeRsaPrivateKey();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kPublicIPv4Host();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kPublicIPv6Host();
// NOLINTEND

} // namespace rtc
