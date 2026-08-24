#include "ll/core/protocol/ProtocolError.h"

namespace ll::protocol::detail {

WireErrorCode toWireErrorCode(ProtocolErrc code) noexcept {
    switch (code) {
    case ProtocolErrc::InvalidControlSchema:
        return WireErrorCode::MalformedControl;
    case ProtocolErrc::InvalidState:
        return WireErrorCode::InvalidState;
    case ProtocolErrc::UnexpectedMessage:
        return WireErrorCode::UnexpectedMessage;
    case ProtocolErrc::SequenceMismatch:
        return WireErrorCode::SequenceMismatch;
    case ProtocolErrc::ReplayDetected:
        return WireErrorCode::ReplayDetected;
    case ProtocolErrc::HandshakeIdMismatch:
        return WireErrorCode::HandshakeIdMismatch;
    case ProtocolErrc::VersionIncompatible:
        return WireErrorCode::VersionIncompatible;
    case ProtocolErrc::DeclarationMalformed:
        return WireErrorCode::DeclarationMalformed;
    case ProtocolErrc::RequirementUnsatisfied:
        return WireErrorCode::RequirementUnsatisfied;
    case ProtocolErrc::IdentityCollision:
        return WireErrorCode::IdentityCollision;
    case ProtocolErrc::DigestMismatch:
        return WireErrorCode::DigestMismatch;
    case ProtocolErrc::Timeout:
        return WireErrorCode::Timeout;
    case ProtocolErrc::MalformedPayload:
        return WireErrorCode::MalformedPayload;
    case ProtocolErrc::UnknownPayload:
        return WireErrorCode::UnknownPayload;
    case ProtocolErrc::InvalidSchema:
        return WireErrorCode::InvalidSchema;
    case ProtocolErrc::RateLimitExceeded:
        return WireErrorCode::RateLimitExceeded;
    case ProtocolErrc::InternalFailure:
        return WireErrorCode::InternalFailure;
    }
    return WireErrorCode::InternalFailure;
}

ProtocolErrc fromWireErrorCode(WireErrorCode code) noexcept {
    switch (code) {
    case WireErrorCode::MalformedControl:
        return ProtocolErrc::InvalidControlSchema;
    case WireErrorCode::InvalidState:
        return ProtocolErrc::InvalidState;
    case WireErrorCode::UnexpectedMessage:
    case WireErrorCode::WrongDirection:
        return ProtocolErrc::UnexpectedMessage;
    case WireErrorCode::SequenceMismatch:
        return ProtocolErrc::SequenceMismatch;
    case WireErrorCode::ReplayDetected:
        return ProtocolErrc::ReplayDetected;
    case WireErrorCode::HandshakeIdMismatch:
        return ProtocolErrc::HandshakeIdMismatch;
    case WireErrorCode::VersionIncompatible:
        return ProtocolErrc::VersionIncompatible;
    case WireErrorCode::RequirementUnsatisfied:
        return ProtocolErrc::RequirementUnsatisfied;
    case WireErrorCode::DigestMismatch:
        return ProtocolErrc::DigestMismatch;
    case WireErrorCode::DeclarationMalformed:
        return ProtocolErrc::DeclarationMalformed;
    case WireErrorCode::IdentityCollision:
        return ProtocolErrc::IdentityCollision;
    case WireErrorCode::UnknownPayload:
        return ProtocolErrc::UnknownPayload;
    case WireErrorCode::InvalidSchema:
        return ProtocolErrc::InvalidSchema;
    case WireErrorCode::MalformedPayload:
    case WireErrorCode::SizeLimitExceeded:
        return ProtocolErrc::MalformedPayload;
    case WireErrorCode::RateLimitExceeded:
    case WireErrorCode::HandshakeBudgetExceeded:
        return ProtocolErrc::RateLimitExceeded;
    case WireErrorCode::Timeout:
        return ProtocolErrc::Timeout;
    case WireErrorCode::RegistryChanged:
        return ProtocolErrc::InvalidState;
    case WireErrorCode::None:
    case WireErrorCode::EndpointGone:
    case WireErrorCode::InternalFailure:
        return ProtocolErrc::InternalFailure;
    }
    return ProtocolErrc::InternalFailure;
}

WireErrorCode toPayloadWireErrorCode(CodecErrc code) noexcept {
    switch (code) {
    case CodecErrc::UnsupportedSchema:
        return WireErrorCode::InvalidSchema;
    case CodecErrc::InvalidValue:
    case CodecErrc::InvalidUtf8:
    case CodecErrc::NonCanonicalVarint:
    case CodecErrc::Truncated:
    case CodecErrc::TrailingBytes:
        return WireErrorCode::MalformedPayload;
    case CodecErrc::SizeLimitExceeded:
        return WireErrorCode::SizeLimitExceeded;
    case CodecErrc::ExceptionEscaped:
        return WireErrorCode::InternalFailure;
    }
    return WireErrorCode::InternalFailure;
}

WireErrorCode toWireErrorCode(SessionErrc code) noexcept {
    switch (code) {
    case SessionErrc::NotFound:
    case SessionErrc::Closed:
    case SessionErrc::WrongGeneration:
    case SessionErrc::TransportUnavailable:
        return WireErrorCode::EndpointGone;
    case SessionErrc::WrongThread:
        return WireErrorCode::InternalFailure;
    case SessionErrc::WrongState:
        return WireErrorCode::InvalidState;
    case SessionErrc::NotNegotiated:
        return WireErrorCode::UnknownPayload;
    case SessionErrc::WrongDirection:
        return WireErrorCode::WrongDirection;
    case SessionErrc::RegistryChanged:
        return WireErrorCode::RegistryChanged;
    case SessionErrc::RateLimited:
        return WireErrorCode::RateLimitExceeded;
    }
    return WireErrorCode::InternalFailure;
}

WireErrorCode toWireErrorCode(TransportErrc code) noexcept {
    switch (code) {
    case TransportErrc::EndpointGone:
        return WireErrorCode::EndpointGone;
    case TransportErrc::ReconstructedSizeExceeded:
        return WireErrorCode::SizeLimitExceeded;
    case TransportErrc::RuntimePacketUnavailable:
    case TransportErrc::SendFailed:
        return WireErrorCode::InternalFailure;
    }
    return WireErrorCode::InternalFailure;
}

ProtocolErrc classifyProtocolError(ll::Error& error, ProtocolErrc fallback) noexcept {
    if (error.isA<ProtocolErrorInfo>()) return error.as<ProtocolErrorInfo>().code;

    if (error.isA<CodecErrorInfo>()) {
        return error.as<CodecErrorInfo>().code == CodecErrc::UnsupportedSchema ? ProtocolErrc::InvalidSchema : fallback;
    }

    if (error.isA<SessionErrorInfo>()) {
        switch (error.as<SessionErrorInfo>().code) {
        case SessionErrc::NotNegotiated:
            return ProtocolErrc::UnknownPayload;
        case SessionErrc::WrongDirection:
            return ProtocolErrc::UnexpectedMessage;
        case SessionErrc::RateLimited:
            return ProtocolErrc::RateLimitExceeded;
        case SessionErrc::WrongState:
        case SessionErrc::RegistryChanged:
            return ProtocolErrc::InvalidState;
        case SessionErrc::NotFound:
        case SessionErrc::Closed:
        case SessionErrc::WrongGeneration:
        case SessionErrc::WrongThread:
        case SessionErrc::TransportUnavailable:
            return ProtocolErrc::InternalFailure;
        }
    }

    return fallback;
}

} // namespace ll::protocol::detail
