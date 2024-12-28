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
// functions
// NOLINTBEGIN
MCAPI int64 ASN1TimeToSec(uchar const*, uint64, bool);

MCAPI ::std::string AdapterTypeToString(::rtc::AdapterType);

MCAPI uint64 ComputeDigest(::rtc::MessageDigest*, void const*, uint64, void*, uint64);

MCAPI uint64 ComputeDigest(::std::string_view, void const*, uint64, void*, uint64);

MCAPI uint64 ComputeHmac(::std::string_view, void const*, uint64, void const*, uint64, void*, uint64);

MCAPI uint64 ComputeHmac(::rtc::MessageDigest*, void const*, uint64, void const*, uint64, void*, uint64);

MCAPI void CopySocketInformationToPacketInfo(uint64, ::rtc::AsyncPacketSocket const&, bool, ::rtc::PacketInfo*);

MCAPI ::std::unique_ptr<::rtc::SocketServer> CreateDefaultSocketServer();

MCAPI uint CreateRandomId();

MCAPI uint64 CreateRandomId64();

MCAPI uint CreateRandomNonZeroId();

MCAPI bool CreateRandomString(uint64, ::std::string*);

MCAPI ::std::string CreateRandomString(uint64);

MCAPI ::std::string CreateRandomUuid();

MCAPI ulong CurrentThreadId();

MCAPI ulong CurrentThreadRef();

MCAPI ::rtc::SocketAddress EmptySocketAddressWithFamily(int);

MCAPI void ExplicitZeroMemory(void*, uint64);

MCAPI ::rtc::IPAddress GetAnyIP(int);

MCAPI ::rtc::IPAddress GetLoopbackIP(int);

MCAPI double GetNextMovingAverage(double, double, double);

MCAPI uint GetPrefix(::_IP_ADAPTER_PREFIX_XP*, ::rtc::IPAddress const&, ::rtc::IPAddress*);

MCAPI bool GetSrtpKeyAndSaltLengths(int, int*, int*);

MCAPI int IPAddressPrecedence(::rtc::IPAddress const&);

MCAPI bool IPFromAddrInfo(::addrinfo*, ::rtc::IPAddress*);

MCAPI bool IPFromString(::std::string_view, ::rtc::IPAddress*);

MCAPI bool IPIs6Bone(::rtc::IPAddress const&);

MCAPI bool IPIs6To4(::rtc::IPAddress const&);

MCAPI bool IPIsAny(::rtc::IPAddress const&);

MCAPI bool IPIsLinkLocal(::rtc::IPAddress const&);

MCAPI bool IPIsLoopback(::rtc::IPAddress const&);

MCAPI bool IPIsMacBased(::rtc::IPAddress const&);

MCAPI bool IPIsPrivate(::rtc::IPAddress const&);

MCAPI bool IPIsPrivateNetwork(::rtc::IPAddress const&);

MCAPI bool IPIsSharedNetwork(::rtc::IPAddress const&);

MCAPI bool IPIsSiteLocal(::rtc::IPAddress const&);

MCAPI bool IPIsTeredo(::rtc::IPAddress const&);

MCAPI bool IPIsULA(::rtc::IPAddress const&);

MCAPI bool IPIsUnspec(::rtc::IPAddress const&);

MCAPI bool IPIsV4Compatibility(::rtc::IPAddress const&);

MCAPI bool IPIsV4Mapped(::rtc::IPAddress const&);

MCAPI bool InitRandom(int);

MCAPI bool InitRandom(char const*, uint64);

MCAPI bool InitializeSSL();

MCAPI bool IsFips180DigestAlgorithm(::std::string_view);

MCAPI bool IsGcmCryptoSuite(int);

MCAPI bool IsThreadRefEqual(ulong const&, ulong const&);

MCAPI ::std::string MakeNetworkKey(::std::string_view, ::rtc::IPAddress const&, int);

MCAPI void SetCurrentThreadName(char const*);

MCAPI bool SocketAddressFromSockAddrStorage(::sockaddr_storage const&, ::rtc::SocketAddress*);

MCAPI ::std::string SrtpCryptoSuiteToName(int);

MCAPI ::std::string StringFormat(char const*, ...);

MCAPI int64 SystemTimeMillis();

MCAPI int64 SystemTimeNanos();

MCAPI uint Time32();

MCAPI int64 TimeAfter(int64);

MCAPI int64 TimeDiff(int64, int64);

MCAPI int64 TimeMicros();

MCAPI int64 TimeMillis();

MCAPI int64 TimeNanos();

MCAPI int64 TimeUTCMicros();

MCAPI int64 TimeUTCMillis();

MCAPI int64 TmToSeconds(::tm const&);

MCAPI ::std::string ToHex(int);

MCAPI ::std::string ToString(ushort);

MCAPI ::std::string ToString(int64);

MCAPI ::std::string ToString(uint64);

MCAPI ::std::string ToString(bool);

MCAPI ::std::string ToString(ulong);

MCAPI ::std::string ToString(long);

MCAPI ::std::string ToString(::std::string_view);

MCAPI ::std::string ToString(uint);

MCAPI ::std::string ToString(int);

MCAPI ::std::string ToString(long double);

MCAPI ::std::string ToString(double);

MCAPI ::std::string TransformAlpnProtocols(::std::vector<::std::string> const&);

MCAPI ::rtc::IPAddress TruncateIP(::rtc::IPAddress const&, int);

MCAPI uint UpdateCrc32(uint, void const*, uint64);

MCAPI int64 WinUwpSystemTimeNanos();

MCAPI uint64 hex_decode_with_delimiter(::rtc::ArrayView<char>, ::std::string_view, char);

MCAPI ::std::string hex_encode(::std::string_view);

MCAPI ::std::string hex_encode_with_delimiter(::std::string_view, char);

MCAPI char const* inet_ntop(int, void const*, char*, int);

MCAPI int inet_pton(int, ::std::string_view, void*);

MCAPI bool operator!=(::rtc::WeakPtr<::webrtc::SctpDataChannelControllerInterface> const&, nullptr_t);

MCAPI bool operator!=(::rtc::WeakPtr<::cricket::Port> const&, nullptr_t);

MCAPI bool operator==(::rtc::WeakPtr<::webrtc::SctpDataChannelControllerInterface> const&, nullptr_t);

MCAPI bool operator==(::rtc::WeakPtr<::cricket::Port> const&, nullptr_t);

MCAPI ::std::vector<::std::string_view> split(::std::string_view, char);

MCAPI uint64 tokenize(::std::string_view, char, ::std::vector<::std::string>*);

MCAPI bool tokenize_first(::std::string_view, char, ::std::string*, ::std::string*);

MCAPI char const* win32_inet_ntop(int, void const*, char*, int);

MCAPI int win32_inet_pton(int, char const*, void*);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::add_lvalue_reference_t<char const[]> DIGEST_MD5();

MCAPI ::std::add_lvalue_reference_t<char const[]> DIGEST_SHA_1();

MCAPI ::std::add_lvalue_reference_t<char const[]> DIGEST_SHA_224();

MCAPI ::std::add_lvalue_reference_t<char const[]> DIGEST_SHA_256();

MCAPI ::std::add_lvalue_reference_t<char const[]> DIGEST_SHA_384();

MCAPI ::std::add_lvalue_reference_t<char const[]> DIGEST_SHA_512();

MCAPI ::rtc::ClockInterface*& g_clock();

MCAPI ::std::add_lvalue_reference_t<char const[]> kCsAeadAes128Gcm();

MCAPI ::std::add_lvalue_reference_t<char const[]> kCsAeadAes256Gcm();

MCAPI ::std::add_lvalue_reference_t<char const[]> kCsAesCm128HmacSha1_32();

MCAPI ::std::add_lvalue_reference_t<char const[]> kCsAesCm128HmacSha1_80();

MCAPI ::std::add_lvalue_reference_t<char const[]> kPemTypeCertificate();

MCAPI ::std::add_lvalue_reference_t<char const[]> kPemTypeEcPrivateKey();

MCAPI ::std::add_lvalue_reference_t<char const[]> kPemTypeRsaPrivateKey();

MCAPI ::std::add_lvalue_reference_t<char const[]> kPublicIPv4Host();

MCAPI ::std::add_lvalue_reference_t<char const[]> kPublicIPv6Host();
// NOLINTEND

} // namespace rtc
