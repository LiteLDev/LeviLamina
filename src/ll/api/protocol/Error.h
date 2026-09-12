#pragma once

#include <cstdint>
#include <string>
#include <string_view>

#include "ll/api/Expected.h"
#include "ll/api/base/Macro.h"

namespace ll::protocol {

enum class IdentityErrc : std::uint8_t {
    InvalidSyntax,
    TooLong,
};

enum class RegistrationErrc : std::uint8_t {
    OwnerUnavailable,
    OwnerDisabled,
    ReservedNamespace,
    NamespaceOwned,
    ModuleNotFound,
    DuplicateModule,
    DuplicatePayload,
    DuplicateType,
    RuntimeIdCollision,
    TombstoneMismatch,
    InvalidDirection,
    EmptySchemaSet,
    DuplicateSchema,
    InvalidLimit,
    PayloadsStillRegistered,
};

enum class CodecErrc : std::uint8_t {
    UnsupportedSchema,
    InvalidValue,
    InvalidUtf8,
    NonCanonicalVarint,
    Truncated,
    TrailingBytes,
    SizeLimitExceeded,
    ExceptionEscaped,
};

enum class SessionErrc : std::uint8_t {
    NotFound,
    Closed,
    WrongGeneration,
    WrongThread,
    WrongState,
    NotNegotiated,
    WrongDirection,
    RegistryChanged,
    RateLimited,
    TransportUnavailable,
};

enum class ProtocolErrc : std::uint8_t {
    InvalidControlSchema,
    InvalidState,
    UnexpectedMessage,
    SequenceMismatch,
    ReplayDetected,
    HandshakeIdMismatch,
    VersionIncompatible,
    DeclarationMalformed,
    RequirementUnsatisfied,
    IdentityCollision,
    DigestMismatch,
    Timeout,
    MalformedPayload,
    UnknownPayload,
    InvalidSchema,
    RateLimitExceeded,
    InternalFailure,
};

enum class LifecycleErrc : std::uint8_t {
    Draining,
    InFlight,
    WouldDeadlock,
    RuntimeStopping,
};

enum class TransportErrc : std::uint8_t {
    EndpointGone,
    RuntimePacketUnavailable,
    ReconstructedSizeExceeded,
    SendFailed,
};

class IdentityErrorInfo final : public ErrorInfoBase {
public:
    IdentityErrc code;
    std::string  context;

    LLAPI explicit IdentityErrorInfo(IdentityErrc code, std::string context = {});
    LLNDAPI std::string message(std::string_view locale) const noexcept override;
};

class RegistrationErrorInfo final : public ErrorInfoBase {
public:
    RegistrationErrc code;
    std::string      context;

    LLAPI explicit RegistrationErrorInfo(RegistrationErrc code, std::string context = {});
    LLNDAPI std::string message(std::string_view locale) const noexcept override;
};

class CodecErrorInfo final : public ErrorInfoBase {
public:
    CodecErrc   code;
    std::string context;

    LLAPI explicit CodecErrorInfo(CodecErrc code, std::string context = {});
    LLNDAPI std::string message(std::string_view locale) const noexcept override;
};

class SessionErrorInfo final : public ErrorInfoBase {
public:
    SessionErrc code;
    std::string context;

    LLAPI explicit SessionErrorInfo(SessionErrc code, std::string context = {});
    LLNDAPI std::string message(std::string_view locale) const noexcept override;
};

class ProtocolErrorInfo final : public ErrorInfoBase {
public:
    ProtocolErrc code;
    std::string  context;

    LLAPI explicit ProtocolErrorInfo(ProtocolErrc code, std::string context = {});
    LLNDAPI std::string message(std::string_view locale) const noexcept override;
};

class LifecycleErrorInfo final : public ErrorInfoBase {
public:
    LifecycleErrc code;
    std::string   context;

    LLAPI explicit LifecycleErrorInfo(LifecycleErrc code, std::string context = {});
    LLNDAPI std::string message(std::string_view locale) const noexcept override;
};

class TransportErrorInfo final : public ErrorInfoBase {
public:
    TransportErrc code;
    std::string   context;

    LLAPI explicit TransportErrorInfo(TransportErrc code, std::string context = {});
    LLNDAPI std::string message(std::string_view locale) const noexcept override;
};

LLNDAPI Unexpected makeIdentityError(IdentityErrc code, std::string context = {}) noexcept;
LLNDAPI Unexpected makeRegistrationError(RegistrationErrc code, std::string context = {}) noexcept;
LLNDAPI Unexpected makeCodecError(CodecErrc code, std::string context = {}) noexcept;
LLNDAPI Unexpected makeSessionError(SessionErrc code, std::string context = {}) noexcept;
LLNDAPI Unexpected makeProtocolError(ProtocolErrc code, std::string context = {}) noexcept;
LLNDAPI Unexpected makeLifecycleError(LifecycleErrc code, std::string context = {}) noexcept;
LLNDAPI Unexpected makeTransportError(TransportErrc code, std::string context = {}) noexcept;

} // namespace ll::protocol
