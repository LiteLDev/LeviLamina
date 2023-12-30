#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/absl/AnyInvocable.h"
#include "mc/deps/webrtc/rtc/AdapterType.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"
#include "mc/deps/webrtc/rtc/AsyncListenSocket.h"
#include "mc/deps/webrtc/rtc/AsyncPacketSocket.h"
#include "mc/deps/webrtc/rtc/BufferT.h"
#include "mc/deps/webrtc/rtc/CheckArgType.h"
#include "mc/deps/webrtc/rtc/DiffServCodePoint.h"
#include "mc/deps/webrtc/rtc/ECCurve.h"
#include "mc/deps/webrtc/rtc/FunctionView.h"
#include "mc/deps/webrtc/rtc/HttpAuthResult.h"
#include "mc/deps/webrtc/rtc/KeyType.h"
#include "mc/deps/webrtc/rtc/LogArgType.h"
#include "mc/deps/webrtc/rtc/LogErrorContext.h"
#include "mc/deps/webrtc/rtc/LoggingSeverity.h"
#include "mc/deps/webrtc/rtc/NetworkBindingResult.h"
#include "mc/deps/webrtc/rtc/NetworkManager.h"
#include "mc/deps/webrtc/rtc/RefCountReleaseStatus.h"
#include "mc/deps/webrtc/rtc/SSLMode.h"
#include "mc/deps/webrtc/rtc/SSLPeerCertificateDigestError.h"
#include "mc/deps/webrtc/rtc/SSLProtocolVersion.h"
#include "mc/deps/webrtc/rtc/SSLRole.h"
#include "mc/deps/webrtc/rtc/Socket.h"
#include "mc/deps/webrtc/rtc/StreamResult.h"
#include "mc/deps/webrtc/rtc/StreamState.h"
#include "mc/deps/webrtc/rtc/Thread.h"
#include "mc/deps/webrtc/rtc/VideoSinkInterface.h"
#include "mc/deps/webrtc/rtc/VideoSourceBase.h"
#include "mc/deps/webrtc/rtc/VideoSourceBaseGuarded.h"
#include "mc/deps/webrtc/rtc/WeakReference.h"
#include "mc/deps/webrtc/rtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class AsyncListenSocket; }
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class AsyncResolverInterface; }
namespace rtc { class AsyncSocketAdapter; }
namespace rtc { class AsyncTCPSocketBase; }
namespace rtc { class BufferedReadAdapter; }
namespace rtc { class ByteBufferWriter; }
namespace rtc { class ClockInterface; }
namespace rtc { class CopyOnWriteBuffer; }
namespace rtc { class CryptString; }
namespace rtc { class CryptStringImpl; }
namespace rtc { class Dispatcher; }
namespace rtc { class IPAddress; }
namespace rtc { class InterfaceAddress; }
namespace rtc { class KeyParams; }
namespace rtc { class LogLineRef; }
namespace rtc { class LogSink; }
namespace rtc { class MessageDigest; }
namespace rtc { class Network; }
namespace rtc { class NetworkManager; }
namespace rtc { class NetworkMask; }
namespace rtc { class NetworkMonitorFactory; }
namespace rtc { class OpenSSLAdapter; }
namespace rtc { class OpenSSLCertificate; }
namespace rtc { class OpenSSLIdentity; }
namespace rtc { class OpenSSLKeyPair; }
namespace rtc { class OpenSSLSessionCache; }
namespace rtc { class OperationsChain; }
namespace rtc { class PacketSocketFactory; }
namespace rtc { class PhysicalSocketServer; }
namespace rtc { class PlatformThread; }
namespace rtc { class RTCCertificate; }
namespace rtc { class RTCCertificateGeneratorInterface; }
namespace rtc { class RaceChecker; }
namespace rtc { class RandomGenerator; }
namespace rtc { class RecursiveCriticalSection; }
namespace rtc { class RefCountInterface; }
namespace rtc { class RouteEndpoint; }
namespace rtc { class SSLAdapter; }
namespace rtc { class SSLCertChain; }
namespace rtc { class SSLCertificate; }
namespace rtc { class SSLCertificateVerifier; }
namespace rtc { class SSLIdentity; }
namespace rtc { class SSLStreamAdapter; }
namespace rtc { class SimpleStringBuilder; }
namespace rtc { class Socket; }
namespace rtc { class SocketAddress; }
namespace rtc { class SocketFactory; }
namespace rtc { class SocketServer; }
namespace rtc { class StreamInterface; }
namespace rtc { class StringBuilder; }
namespace rtc { class Thread; }
namespace rtc { class ThreadManager; }
namespace rtc { struct HttpAuthContext; }
namespace rtc { struct NetworkRoute; }
namespace rtc { struct PacketInfo; }
namespace rtc { struct PacketOptions; }
namespace rtc { struct PacketSocketTcpOptions; }
namespace rtc { struct PacketTimeUpdateParams; }
namespace rtc { struct ProxyInfo; }
namespace rtc { struct RSAParams; }
namespace rtc { struct SSLCertificateStats; }
namespace rtc { struct SSLFingerprint; }
namespace rtc { struct SSLIdentityParams; }
namespace rtc { struct ThreadAttributes; }
namespace rtc { struct VideoSinkWants; }
namespace rtc::internal { class WeakReference; }
namespace rtc::webrtc_checks_impl { struct ToStringVal; }
namespace webrtc { class AsyncDnsResolverInterface; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class MdnsResponderInterface; }
namespace webrtc { class SessionDescriptionInterface; }
namespace webrtc { class TaskQueueBase; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class VideoFrame; }
namespace webrtc { class VideoFrameBuffer; }
// clang-format on

namespace rtc {
// NOLINTBEGIN
// symbol: ?ASN1TimeToSec@rtc@@YA_JPEBE_K_N@Z
MCAPI int64 ASN1TimeToSec(uchar const*, uint64, bool);

// symbol:
// ?AdapterTypeToString@rtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4AdapterType@1@@Z
MCAPI std::string AdapterTypeToString(::rtc::AdapterType);

// symbol:
// ?ComputeDigest@rtc@@YA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@0PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
MCAPI bool ComputeDigest(std::string_view, std::string_view, std::string*);

// symbol:
// ?ComputeDigest@rtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVMessageDigest@1@V?$basic_string_view@DU?$char_traits@D@std@@@3@@Z
MCAPI std::string ComputeDigest(class rtc::MessageDigest*, std::string_view);

// symbol:
// ?ComputeDigest@rtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@0@Z
MCAPI std::string ComputeDigest(std::string_view, std::string_view);

// symbol: ?ComputeDigest@rtc@@YA_KPEAVMessageDigest@1@PEBX_KPEAX2@Z
MCAPI uint64 ComputeDigest(class rtc::MessageDigest*, void const*, uint64, void*, uint64);

// symbol: ?ComputeDigest@rtc@@YA_KV?$basic_string_view@DU?$char_traits@D@std@@@std@@PEBX_KPEAX2@Z
MCAPI uint64 ComputeDigest(std::string_view, void const*, uint64, void*, uint64);

// symbol: ?ComputeHmac@rtc@@YA_KPEAVMessageDigest@1@PEBX_K12PEAX2@Z
MCAPI uint64 ComputeHmac(class rtc::MessageDigest*, void const*, uint64, void const*, uint64, void*, uint64);

// symbol: ?ComputeHmac@rtc@@YA_KV?$basic_string_view@DU?$char_traits@D@std@@@std@@PEBX_K12PEAX2@Z
MCAPI uint64 ComputeHmac(std::string_view, void const*, uint64, void const*, uint64, void*, uint64);

// symbol: ?CopySocketInformationToPacketInfo@rtc@@YAX_KAEBVAsyncPacketSocket@1@_NPEAUPacketInfo@1@@Z
MCAPI void
CopySocketInformationToPacketInfo(uint64, class rtc::AsyncPacketSocket const&, bool, struct rtc::PacketInfo*);

// symbol:
// ?CreateDefaultSocketServer@rtc@@YA?AV?$unique_ptr@VSocketServer@rtc@@U?$default_delete@VSocketServer@rtc@@@std@@@std@@XZ
MCAPI std::unique_ptr<class rtc::SocketServer> CreateDefaultSocketServer();

// symbol: ?CreateRandomData@rtc@@YA_N_KPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI bool CreateRandomData(uint64, std::string*);

// symbol: ?CreateRandomId@rtc@@YAIXZ
MCAPI uint CreateRandomId();

// symbol: ?CreateRandomId64@rtc@@YA_KXZ
MCAPI uint64 CreateRandomId64();

// symbol: ?CreateRandomNonZeroId@rtc@@YAIXZ
MCAPI uint CreateRandomNonZeroId();

// symbol: ?CreateRandomString@rtc@@YA_N_KPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI bool CreateRandomString(uint64, std::string*);

// symbol: ?CreateRandomString@rtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_K@Z
MCAPI std::string CreateRandomString(uint64);

// symbol: ?CreateRandomUuid@rtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
MCAPI std::string CreateRandomUuid();

// symbol: ?CurrentThreadId@rtc@@YAKXZ
MCAPI ulong CurrentThreadId();

// symbol: ?CurrentThreadRef@rtc@@YAKXZ
MCAPI ulong CurrentThreadRef();

// symbol: ?DIGEST_MD5@rtc@@3QBDB
MCAPI extern char const DIGEST_MD5[];

// symbol: ?DIGEST_SHA_1@rtc@@3QBDB
MCAPI extern char const DIGEST_SHA_1[];

// symbol: ?DIGEST_SHA_224@rtc@@3QBDB
MCAPI extern char const DIGEST_SHA_224[];

// symbol: ?DIGEST_SHA_256@rtc@@3QBDB
MCAPI extern char const DIGEST_SHA_256[];

// symbol: ?DIGEST_SHA_384@rtc@@3QBDB
MCAPI extern char const DIGEST_SHA_384[];

// symbol: ?DIGEST_SHA_512@rtc@@3QBDB
MCAPI extern char const DIGEST_SHA_512[];

// symbol: ?EmptySocketAddressWithFamily@rtc@@YA?AVSocketAddress@1@H@Z
MCAPI class rtc::SocketAddress EmptySocketAddressWithFamily(int);

// symbol: ?ExplicitZeroMemory@rtc@@YAXPEAX_K@Z
MCAPI void ExplicitZeroMemory(void*, uint64);

// symbol: ?GetAnyIP@rtc@@YA?AVIPAddress@1@H@Z
MCAPI class rtc::IPAddress GetAnyIP(int);

// symbol: ?GetNextMovingAverage@rtc@@YANNNN@Z
MCAPI double GetNextMovingAverage(double, double, double);

// symbol: ?GetPrefix@rtc@@YAIPEAU_IP_ADAPTER_PREFIX_XP@@AEBVIPAddress@1@PEAV31@@Z
MCAPI uint GetPrefix(struct _IP_ADAPTER_PREFIX_XP*, class rtc::IPAddress const&, class rtc::IPAddress*);

// symbol: ?GetSrtpKeyAndSaltLengths@rtc@@YA_NHPEAH0@Z
MCAPI bool GetSrtpKeyAndSaltLengths(int, int*, int*);

// symbol:
// ?HttpAuthenticate@rtc@@YA?AW4HttpAuthResult@1@V?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBVSocketAddress@1@000AEBVCryptString@1@AEAPEAUHttpAuthContext@1@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@4@Z
MCAPI ::rtc::HttpAuthResult
HttpAuthenticate(std::string_view, class rtc::SocketAddress const&, std::string_view, std::string_view, std::string_view, class rtc::CryptString const&, struct rtc::HttpAuthContext*&, std::string&, std::string&);

// symbol: ?IPAddressPrecedence@rtc@@YAHAEBVIPAddress@1@@Z
MCAPI int IPAddressPrecedence(class rtc::IPAddress const&);

// symbol: ?IPFromAddrInfo@rtc@@YA_NPEAUaddrinfo@@PEAVIPAddress@1@@Z
MCAPI bool IPFromAddrInfo(struct addrinfo*, class rtc::IPAddress*);

// symbol: ?IPFromString@rtc@@YA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@PEAVIPAddress@1@@Z
MCAPI bool IPFromString(std::string_view, class rtc::IPAddress*);

// symbol: ?IPIs6Bone@rtc@@YA_NAEBVIPAddress@1@@Z
MCAPI bool IPIs6Bone(class rtc::IPAddress const&);

// symbol: ?IPIs6To4@rtc@@YA_NAEBVIPAddress@1@@Z
MCAPI bool IPIs6To4(class rtc::IPAddress const&);

// symbol: ?IPIsAny@rtc@@YA_NAEBVIPAddress@1@@Z
MCAPI bool IPIsAny(class rtc::IPAddress const&);

// symbol: ?IPIsLinkLocal@rtc@@YA_NAEBVIPAddress@1@@Z
MCAPI bool IPIsLinkLocal(class rtc::IPAddress const&);

// symbol: ?IPIsLoopback@rtc@@YA_NAEBVIPAddress@1@@Z
MCAPI bool IPIsLoopback(class rtc::IPAddress const&);

// symbol: ?IPIsMacBased@rtc@@YA_NAEBVIPAddress@1@@Z
MCAPI bool IPIsMacBased(class rtc::IPAddress const&);

// symbol: ?IPIsPrivate@rtc@@YA_NAEBVIPAddress@1@@Z
MCAPI bool IPIsPrivate(class rtc::IPAddress const&);

// symbol: ?IPIsPrivateNetwork@rtc@@YA_NAEBVIPAddress@1@@Z
MCAPI bool IPIsPrivateNetwork(class rtc::IPAddress const&);

// symbol: ?IPIsSharedNetwork@rtc@@YA_NAEBVIPAddress@1@@Z
MCAPI bool IPIsSharedNetwork(class rtc::IPAddress const&);

// symbol: ?IPIsSiteLocal@rtc@@YA_NAEBVIPAddress@1@@Z
MCAPI bool IPIsSiteLocal(class rtc::IPAddress const&);

// symbol: ?IPIsTeredo@rtc@@YA_NAEBVIPAddress@1@@Z
MCAPI bool IPIsTeredo(class rtc::IPAddress const&);

// symbol: ?IPIsULA@rtc@@YA_NAEBVIPAddress@1@@Z
MCAPI bool IPIsULA(class rtc::IPAddress const&);

// symbol: ?IPIsUnspec@rtc@@YA_NAEBVIPAddress@1@@Z
MCAPI bool IPIsUnspec(class rtc::IPAddress const&);

// symbol: ?IPIsV4Compatibility@rtc@@YA_NAEBVIPAddress@1@@Z
MCAPI bool IPIsV4Compatibility(class rtc::IPAddress const&);

// symbol: ?IPIsV4Mapped@rtc@@YA_NAEBVIPAddress@1@@Z
MCAPI bool IPIsV4Mapped(class rtc::IPAddress const&);

// symbol: ?InitRandom@rtc@@YA_NH@Z
MCAPI bool InitRandom(int);

// symbol: ?InitRandom@rtc@@YA_NPEBD_K@Z
MCAPI bool InitRandom(char const*, uint64);

// symbol: ?InitializeSSL@rtc@@YA_NXZ
MCAPI bool InitializeSSL();

// symbol: ?IsFips180DigestAlgorithm@rtc@@YA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
MCAPI bool IsFips180DigestAlgorithm(std::string_view);

// symbol: ?IsGcmCryptoSuite@rtc@@YA_NH@Z
MCAPI bool IsGcmCryptoSuite(int);

// symbol: ?IsGcmCryptoSuiteName@rtc@@YA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
MCAPI bool IsGcmCryptoSuiteName(std::string_view);

// symbol: ?IsThreadRefEqual@rtc@@YA_NAEBK0@Z
MCAPI bool IsThreadRefEqual(ulong const&, ulong const&);

// symbol:
// ?MakeNetworkKey@rtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@AEBVIPAddress@1@H@Z
MCAPI std::string MakeNetworkKey(std::string_view, class rtc::IPAddress const&, int);

// symbol:
// ?ResolveHostname@rtc@@YAHV?$basic_string_view@DU?$char_traits@D@std@@@std@@HPEAV?$vector@VIPAddress@rtc@@V?$allocator@VIPAddress@rtc@@@std@@@3@@Z
MCAPI int ResolveHostname(std::string_view, int, std::vector<class rtc::IPAddress>*);

// symbol: ?SetCurrentThreadName@rtc@@YAXPEBD@Z
MCAPI void SetCurrentThreadName(char const*);

// symbol: ?ShouldAllowLegacyTLSProtocols@rtc@@YA_NXZ
MCAPI bool ShouldAllowLegacyTLSProtocols();

// symbol: ?SocketAddressFromSockAddrStorage@rtc@@YA_NAEBUsockaddr_storage@@PEAVSocketAddress@1@@Z
MCAPI bool SocketAddressFromSockAddrStorage(struct sockaddr_storage const&, class rtc::SocketAddress*);

// symbol: ?SrtpCryptoSuiteFromName@rtc@@YAHV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
MCAPI int SrtpCryptoSuiteFromName(std::string_view);

// symbol: ?SrtpCryptoSuiteToName@rtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
MCAPI std::string SrtpCryptoSuiteToName(int);

// symbol: ?StringFormat@rtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBDZZ
MCAPI std::string StringFormat(char const*, ...);

// symbol: ?SystemTimeMillis@rtc@@YA_JXZ
MCAPI int64 SystemTimeMillis();

// symbol: ?SystemTimeNanos@rtc@@YA_JXZ
MCAPI int64 SystemTimeNanos();

// symbol: ?Time32@rtc@@YAIXZ
MCAPI uint Time32();

// symbol: ?TimeAfter@rtc@@YA_J_J@Z
MCAPI int64 TimeAfter(int64);

// symbol: ?TimeDiff@rtc@@YA_J_J0@Z
MCAPI int64 TimeDiff(int64, int64);

// symbol: ?TimeMicros@rtc@@YA_JXZ
MCAPI int64 TimeMicros();

// symbol: ?TimeMillis@rtc@@YA_JXZ
MCAPI int64 TimeMillis();

// symbol: ?TimeNanos@rtc@@YA_JXZ
MCAPI int64 TimeNanos();

// symbol: ?TimeUTCMicros@rtc@@YA_JXZ
MCAPI int64 TimeUTCMicros();

// symbol: ?TimeUTCMillis@rtc@@YA_JXZ
MCAPI int64 TimeUTCMillis();

// symbol: ?TmToSeconds@rtc@@YA_JAEBUtm@@@Z
MCAPI int64 TmToSeconds(struct tm const&);

// symbol: ?ToHex@rtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
MCAPI std::string ToHex(int);

// symbol: ?ToString@rtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_J@Z
MCAPI std::string ToString(int64);

// symbol: ?ToString@rtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
MCAPI std::string ToString(bool);

// symbol:
// ?ToString@rtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@@Z
MCAPI std::string ToString(std::string_view);

// symbol: ?ToString@rtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@N@Z
MCAPI std::string ToString(double);

// symbol: ?ToString@rtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
MCAPI std::string ToString(int);

// symbol: ?ToString@rtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@J@Z
MCAPI std::string ToString(long);

// symbol: ?ToString@rtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@O@Z
MCAPI std::string ToString(long double);

// symbol: ?ToString@rtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_K@Z
MCAPI std::string ToString(uint64);

// symbol: ?ToString@rtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z
MCAPI std::string ToString(uint);

// symbol: ?ToString@rtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@K@Z
MCAPI std::string ToString(ulong);

// symbol: ?ToString@rtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@Z
MCAPI std::string ToString(ushort);

// symbol:
// ?TransformAlpnProtocols@rtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
MCAPI std::string TransformAlpnProtocols(std::vector<std::string> const&);

// symbol: ?TruncateIP@rtc@@YA?AVIPAddress@1@AEBV21@H@Z
MCAPI class rtc::IPAddress TruncateIP(class rtc::IPAddress const&, int);

// symbol: ?UpdateCrc32@rtc@@YAIIPEBX_K@Z
MCAPI uint UpdateCrc32(uint, void const*, uint64);

// symbol: ?WinUwpSystemTimeNanos@rtc@@YA_JXZ
MCAPI int64 WinUwpSystemTimeNanos();

// symbol: ?g_clock@rtc@@3PEAVClockInterface@1@EA
MCAPI extern class rtc::ClockInterface* g_clock;

// symbol:
// ?hex_decode_with_delimiter@rtc@@YA_KV?$ArrayView@D$0?BCGH@@1@V?$basic_string_view@DU?$char_traits@D@std@@@std@@D@Z
MCAPI uint64 hex_decode_with_delimiter(class rtc::ArrayView<char, -4711>, std::string_view, char);

// symbol:
// ?hex_encode@rtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@@Z
MCAPI std::string hex_encode(std::string_view);

// symbol:
// ?hex_encode_with_delimiter@rtc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@D@Z
MCAPI std::string hex_encode_with_delimiter(std::string_view, char);

// symbol: ?inet_ntop@rtc@@YAPEBDHPEBXPEADH@Z
MCAPI char const* inet_ntop(int, void const*, char*, int);

// symbol: ?inet_pton@rtc@@YAHHV?$basic_string_view@DU?$char_traits@D@std@@@std@@PEAX@Z
MCAPI int inet_pton(int, std::string_view, void*);

// symbol: ?kCsAeadAes128Gcm@rtc@@3QBDB
MCAPI extern char const kCsAeadAes128Gcm[];

// symbol: ?kCsAeadAes256Gcm@rtc@@3QBDB
MCAPI extern char const kCsAeadAes256Gcm[];

// symbol: ?kCsAesCm128HmacSha1_32@rtc@@3QBDB
MCAPI extern char const kCsAesCm128HmacSha1_32[];

// symbol: ?kCsAesCm128HmacSha1_80@rtc@@3QBDB
MCAPI extern char const kCsAesCm128HmacSha1_80[];

// symbol: ?kPemTypeCertificate@rtc@@3QBDB
MCAPI extern char const kPemTypeCertificate[];

// symbol: ?kPemTypeEcPrivateKey@rtc@@3QBDB
MCAPI extern char const kPemTypeEcPrivateKey[];

// symbol: ?kPemTypeRsaPrivateKey@rtc@@3QBDB
MCAPI extern char const kPemTypeRsaPrivateKey[];

// symbol: ?kPublicIPv4Host@rtc@@3QBDB
MCAPI extern char const kPublicIPv4Host[];

// symbol: ?kPublicIPv6Host@rtc@@3QBDB
MCAPI extern char const kPublicIPv6Host[];

// symbol:
// ?split@rtc@@YA?AV?$vector@V?$basic_string_view@DU?$char_traits@D@std@@@std@@V?$allocator@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@2@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@D@Z
MCAPI std::vector<std::string_view> split(std::string_view, char);

// symbol: ?strcpyn@rtc@@YA_KPEAD_KV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
MCAPI uint64 strcpyn(char*, uint64, std::string_view);

// symbol:
// ?tokenize@rtc@@YA_KV?$basic_string_view@DU?$char_traits@D@std@@@std@@DPEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
MCAPI uint64 tokenize(std::string_view, char, std::vector<std::string>*);

// symbol:
// ?tokenize_first@rtc@@YA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@DPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@1@Z
MCAPI bool tokenize_first(std::string_view, char, std::string*, std::string*);

// symbol: ?win32_inet_ntop@rtc@@YAPEBDHPEBXPEADH@Z
MCAPI char const* win32_inet_ntop(int, void const*, char*, int);

// symbol: ?win32_inet_pton@rtc@@YAHHPEBDPEAX@Z
MCAPI int win32_inet_pton(int, char const*, void*);
// NOLINTEND

}; // namespace rtc
