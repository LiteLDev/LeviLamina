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
MCNAPI int64 ASN1TimeToSec(uchar const*, uint64, bool);

MCNAPI ::std::string AdapterTypeToString(::rtc::AdapterType);

MCNAPI uint64 ComputeDigest(::rtc::MessageDigest*, void const*, uint64, void*, uint64);

MCNAPI uint64 ComputeDigest(::std::string_view, void const*, uint64, void*, uint64);

MCNAPI uint64 ComputeHmac(::std::string_view, void const*, uint64, void const*, uint64, void*, uint64);

MCNAPI uint64 ComputeHmac(::rtc::MessageDigest*, void const*, uint64, void const*, uint64, void*, uint64);

MCNAPI void CopySocketInformationToPacketInfo(uint64, ::rtc::AsyncPacketSocket const&, bool, ::rtc::PacketInfo*);

MCNAPI ::std::unique_ptr<::rtc::SocketServer> CreateDefaultSocketServer();

MCNAPI uint CreateRandomId();

MCNAPI uint64 CreateRandomId64();

MCNAPI uint CreateRandomNonZeroId();

MCNAPI bool CreateRandomString(uint64, ::std::string*);

MCNAPI ::std::string CreateRandomString(uint64);

MCNAPI ::std::string CreateRandomUuid();

MCNAPI ulong CurrentThreadId();

MCNAPI ulong CurrentThreadRef();

MCNAPI ::rtc::SocketAddress EmptySocketAddressWithFamily(int);

MCNAPI void ExplicitZeroMemory(void*, uint64);

MCNAPI ::rtc::IPAddress GetAnyIP(int);

MCNAPI double GetNextMovingAverage(double, double, double);

MCNAPI uint GetPrefix(::_IP_ADAPTER_PREFIX_XP*, ::rtc::IPAddress const&, ::rtc::IPAddress*);

MCNAPI bool GetSrtpKeyAndSaltLengths(int, int*, int*);

MCNAPI int IPAddressPrecedence(::rtc::IPAddress const&);

MCNAPI bool IPFromAddrInfo(::addrinfo*, ::rtc::IPAddress*);

MCNAPI bool IPFromString(::std::string_view, ::rtc::IPAddress*);

MCNAPI bool IPIs6Bone(::rtc::IPAddress const&);

MCNAPI bool IPIs6To4(::rtc::IPAddress const&);

MCNAPI bool IPIsAny(::rtc::IPAddress const&);

MCNAPI bool IPIsLinkLocal(::rtc::IPAddress const&);

MCNAPI bool IPIsLoopback(::rtc::IPAddress const&);

MCNAPI bool IPIsMacBased(::rtc::IPAddress const&);

MCNAPI bool IPIsPrivate(::rtc::IPAddress const&);

MCNAPI bool IPIsPrivateNetwork(::rtc::IPAddress const&);

MCNAPI bool IPIsSharedNetwork(::rtc::IPAddress const&);

MCNAPI bool IPIsSiteLocal(::rtc::IPAddress const&);

MCNAPI bool IPIsTeredo(::rtc::IPAddress const&);

MCNAPI bool IPIsULA(::rtc::IPAddress const&);

MCNAPI bool IPIsUnspec(::rtc::IPAddress const&);

MCNAPI bool IPIsV4Compatibility(::rtc::IPAddress const&);

MCNAPI bool IPIsV4Mapped(::rtc::IPAddress const&);

MCNAPI bool InitRandom(int);

MCNAPI bool InitRandom(char const*, uint64);

MCNAPI bool InitializeSSL();

MCNAPI bool IsFips180DigestAlgorithm(::std::string_view);

MCNAPI bool IsGcmCryptoSuite(int);

MCNAPI bool IsThreadRefEqual(ulong const&, ulong const&);

MCNAPI ::std::string MakeNetworkKey(::std::string_view, ::rtc::IPAddress const&, int);

MCNAPI void SetCurrentThreadName(char const*);

MCNAPI bool SocketAddressFromSockAddrStorage(::sockaddr_storage const&, ::rtc::SocketAddress*);

MCNAPI ::std::string SrtpCryptoSuiteToName(int);

MCNAPI ::std::string StringFormat(char const*, ...);

MCNAPI int64 SystemTimeMillis();

MCNAPI int64 SystemTimeNanos();

MCNAPI uint Time32();

MCNAPI int64 TimeAfter(int64);

MCNAPI int64 TimeDiff(int64, int64);

MCNAPI int64 TimeMicros();

MCNAPI int64 TimeMillis();

MCNAPI int64 TimeNanos();

MCNAPI int64 TimeUTCMicros();

MCNAPI int64 TimeUTCMillis();

MCNAPI int64 TmToSeconds(::tm const&);

MCNAPI ::std::string ToHex(int);

MCNAPI ::std::string ToString(ushort);

MCNAPI ::std::string ToString(int64);

MCNAPI ::std::string ToString(uint64);

MCNAPI ::std::string ToString(bool);

MCNAPI ::std::string ToString(ulong);

MCNAPI ::std::string ToString(long);

MCNAPI ::std::string ToString(::std::string_view);

MCNAPI ::std::string ToString(uint);

MCNAPI ::std::string ToString(int);

MCNAPI ::std::string ToString(long double);

MCNAPI ::std::string ToString(double);

MCNAPI ::std::string TransformAlpnProtocols(::std::vector<::std::string> const&);

MCNAPI ::rtc::IPAddress TruncateIP(::rtc::IPAddress const&, int);

MCNAPI uint UpdateCrc32(uint, void const*, uint64);

MCNAPI int64 WinUwpSystemTimeNanos();

MCNAPI uint64 hex_decode_with_delimiter(::rtc::ArrayView<char>, ::std::string_view, char);

MCNAPI ::std::string hex_encode(::std::string_view);

MCNAPI ::std::string hex_encode_with_delimiter(::std::string_view, char);

MCNAPI char const* inet_ntop(int, void const*, char*, int);

MCNAPI int inet_pton(int, ::std::string_view, void*);

MCNAPI bool operator!=(::rtc::WeakPtr<::webrtc::SctpDataChannelControllerInterface> const&, nullptr_t);

MCNAPI bool operator!=(::rtc::WeakPtr<::cricket::Port> const&, nullptr_t);

MCNAPI bool operator==(::rtc::WeakPtr<::webrtc::SctpDataChannelControllerInterface> const&, nullptr_t);

MCNAPI bool operator==(::rtc::WeakPtr<::cricket::Port> const&, nullptr_t);

MCNAPI ::std::vector<::std::string_view> split(::std::string_view, char);

MCNAPI uint64 tokenize(::std::string_view, char, ::std::vector<::std::string>*);

MCNAPI bool tokenize_first(::std::string_view, char, ::std::string*, ::std::string*);

MCNAPI char const* win32_inet_ntop(int, void const*, char*, int);

MCNAPI int win32_inet_pton(int, char const*, void*);
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
