#include "ll/api/protocol/Error.h"
#include "ll/api/protocol/Limits.h"

#include "fmt/format.h"
#include <utility>

namespace ll::protocol {

namespace detail {

std::string boundedContext(std::string context) {
    if (context.size() > Limits::MaxErrorContextBytes) {
        context.resize(Limits::MaxErrorContextBytes);
    }
    return context;
}

std::string formatMessage(std::string_view family, std::string_view description, std::string_view context) {
    if (context.empty()) {
        return fmt::format("{}: {}", family, description);
    }
    return fmt::format("{}: {} ({})", family, description, context);
}

std::string_view describe(IdentityErrc code) {
    switch (code) {
    case IdentityErrc::InvalidSyntax:
        return "invalid syntax";
    case IdentityErrc::TooLong:
        return "value is too long";
    case IdentityErrc::NamespaceMismatch:
        return "namespace mismatch";
    }
    return "unknown identity error";
}

std::string_view describe(RegistrationErrc code) {
    switch (code) {
    case RegistrationErrc::OwnerUnavailable:
        return "owner is unavailable";
    case RegistrationErrc::OwnerDisabled:
        return "owner is disabled";
    case RegistrationErrc::ReservedNamespace:
        return "protocol namespace is reserved";
    case RegistrationErrc::NamespaceOwned:
        return "protocol namespace is already owned";
    case RegistrationErrc::ModuleNotFound:
        return "module is not registered";
    case RegistrationErrc::DuplicateModule:
        return "module is already registered";
    case RegistrationErrc::DuplicatePayload:
        return "payload is already registered";
    case RegistrationErrc::DuplicateType:
        return "payload type is already registered";
    case RegistrationErrc::RuntimeIdCollision:
        return "runtime ID collision";
    case RegistrationErrc::TombstoneMismatch:
        return "transport tombstone is incompatible";
    case RegistrationErrc::InvalidDirection:
        return "payload direction is invalid for this target";
    case RegistrationErrc::EmptySchemaSet:
        return "schema set is empty";
    case RegistrationErrc::DuplicateSchema:
        return "schema set contains a duplicate";
    case RegistrationErrc::InvalidLimit:
        return "limit is invalid";
    case RegistrationErrc::PayloadsStillRegistered:
        return "module still has registered payloads";
    }
    return "unknown registration error";
}

std::string_view describe(CodecErrc code) {
    switch (code) {
    case CodecErrc::UnsupportedSchema:
        return "schema is unsupported";
    case CodecErrc::InvalidValue:
        return "value is invalid";
    case CodecErrc::InvalidUtf8:
        return "text is not valid UTF-8";
    case CodecErrc::NonCanonicalVarint:
        return "varint is not canonical";
    case CodecErrc::Truncated:
        return "input is truncated";
    case CodecErrc::TrailingBytes:
        return "input has trailing bytes";
    case CodecErrc::SizeLimitExceeded:
        return "size limit exceeded";
    case CodecErrc::ExceptionEscaped:
        return "third-party exception escaped";
    }
    return "unknown codec error";
}

std::string_view describe(SessionErrc code) {
    switch (code) {
    case SessionErrc::NotFound:
        return "session not found";
    case SessionErrc::Closed:
        return "session is closed";
    case SessionErrc::WrongGeneration:
        return "session generation is stale";
    case SessionErrc::WrongThread:
        return "operation is on the wrong thread";
    case SessionErrc::WrongState:
        return "session state does not allow the operation";
    case SessionErrc::NotNegotiated:
        return "payload was not negotiated";
    case SessionErrc::WrongDirection:
        return "payload direction is invalid for this endpoint";
    case SessionErrc::RegistryChanged:
        return "registry changed after negotiation";
    case SessionErrc::RateLimited:
        return "session rate limit exceeded";
    case SessionErrc::TransportUnavailable:
        return "session transport is unavailable";
    }
    return "unknown session error";
}

std::string_view describe(ProtocolErrc code) {
    switch (code) {
    case ProtocolErrc::InvalidControlSchema:
        return "control schema is invalid";
    case ProtocolErrc::InvalidState:
        return "protocol state is invalid";
    case ProtocolErrc::UnexpectedMessage:
        return "control message is unexpected";
    case ProtocolErrc::SequenceMismatch:
        return "message sequence does not match";
    case ProtocolErrc::ReplayDetected:
        return "replayed message detected";
    case ProtocolErrc::HandshakeIdMismatch:
        return "handshake ID does not match";
    case ProtocolErrc::VersionIncompatible:
        return "protocol versions are incompatible";
    case ProtocolErrc::DeclarationMalformed:
        return "declaration is malformed";
    case ProtocolErrc::RequirementUnsatisfied:
        return "required capability is unavailable";
    case ProtocolErrc::IdentityCollision:
        return "wire identity collision";
    case ProtocolErrc::DigestMismatch:
        return "transcript digest does not match";
    case ProtocolErrc::Timeout:
        return "protocol operation timed out";
    case ProtocolErrc::MalformedPayload:
        return "payload is malformed";
    case ProtocolErrc::UnknownPayload:
        return "payload is unknown";
    case ProtocolErrc::InvalidSchema:
        return "payload schema is invalid";
    case ProtocolErrc::RateLimitExceeded:
        return "peer exceeded a protocol rate limit";
    case ProtocolErrc::InternalFailure:
        return "internal protocol failure";
    }
    return "unknown protocol error";
}

std::string_view describe(LifecycleErrc code) {
    switch (code) {
    case LifecycleErrc::Draining:
        return "registration is draining";
    case LifecycleErrc::InFlight:
        return "registration still has in-flight work";
    case LifecycleErrc::WouldDeadlock:
        return "operation would deadlock";
    case LifecycleErrc::RuntimeStopping:
        return "protocol runtime is stopping";
    }
    return "unknown lifecycle error";
}

std::string_view describe(TransportErrc code) {
    switch (code) {
    case TransportErrc::EndpointGone:
        return "transport endpoint no longer exists";
    case TransportErrc::RuntimePacketUnavailable:
        return "RuntimePacket transport is unavailable";
    case TransportErrc::MinecraftRejected:
        return "Minecraft rejected the packet";
    case TransportErrc::ReconstructedSizeExceeded:
        return "reconstructed packet size exceeds the transport limit";
    case TransportErrc::SendFailed:
        return "packet send failed";
    }
    return "unknown transport error";
}

} // namespace detail

IdentityErrorInfo::IdentityErrorInfo(IdentityErrc code, std::string context)
: code(code),
  context(detail::boundedContext(std::move(context))) {}

std::string IdentityErrorInfo::message(std::string_view) const noexcept {
    return detail::formatMessage("protocol identity error", detail::describe(code), context);
}

RegistrationErrorInfo::RegistrationErrorInfo(RegistrationErrc code, std::string context)
: code(code),
  context(detail::boundedContext(std::move(context))) {}

std::string RegistrationErrorInfo::message(std::string_view) const noexcept {
    return detail::formatMessage("protocol registration error", detail::describe(code), context);
}

CodecErrorInfo::CodecErrorInfo(CodecErrc code, std::string context)
: code(code),
  context(detail::boundedContext(std::move(context))) {}

std::string CodecErrorInfo::message(std::string_view) const noexcept {
    return detail::formatMessage("protocol codec error", detail::describe(code), context);
}

SessionErrorInfo::SessionErrorInfo(SessionErrc code, std::string context)
: code(code),
  context(detail::boundedContext(std::move(context))) {}

std::string SessionErrorInfo::message(std::string_view) const noexcept {
    return detail::formatMessage("protocol session error", detail::describe(code), context);
}

ProtocolErrorInfo::ProtocolErrorInfo(ProtocolErrc code, std::string context)
: code(code),
  context(detail::boundedContext(std::move(context))) {}

std::string ProtocolErrorInfo::message(std::string_view) const noexcept {
    return detail::formatMessage("protocol error", detail::describe(code), context);
}

LifecycleErrorInfo::LifecycleErrorInfo(LifecycleErrc code, std::string context)
: code(code),
  context(detail::boundedContext(std::move(context))) {}

std::string LifecycleErrorInfo::message(std::string_view) const noexcept {
    return detail::formatMessage("protocol lifecycle error", detail::describe(code), context);
}

TransportErrorInfo::TransportErrorInfo(TransportErrc code, std::string context)
: code(code),
  context(detail::boundedContext(std::move(context))) {}

std::string TransportErrorInfo::message(std::string_view) const noexcept {
    return detail::formatMessage("protocol transport error", detail::describe(code), context);
}

Unexpected makeIdentityError(IdentityErrc code, std::string context) noexcept {
    return makeError<IdentityErrorInfo>(code, std::move(context));
}

Unexpected makeRegistrationError(RegistrationErrc code, std::string context) noexcept {
    return makeError<RegistrationErrorInfo>(code, std::move(context));
}

Unexpected makeCodecError(CodecErrc code, std::string context) noexcept {
    return makeError<CodecErrorInfo>(code, std::move(context));
}

Unexpected makeSessionError(SessionErrc code, std::string context) noexcept {
    return makeError<SessionErrorInfo>(code, std::move(context));
}

Unexpected makeProtocolError(ProtocolErrc code, std::string context) noexcept {
    return makeError<ProtocolErrorInfo>(code, std::move(context));
}

Unexpected makeLifecycleError(LifecycleErrc code, std::string context) noexcept {
    return makeError<LifecycleErrorInfo>(code, std::move(context));
}

Unexpected makeTransportError(TransportErrc code, std::string context) noexcept {
    return makeError<TransportErrorInfo>(code, std::move(context));
}

} // namespace ll::protocol
