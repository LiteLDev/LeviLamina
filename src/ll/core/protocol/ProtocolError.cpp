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
    case TransportErrc::MinecraftRejected:
    case TransportErrc::SendFailed:
        return WireErrorCode::InternalFailure;
    }
    return WireErrorCode::InternalFailure;
}

} // namespace ll::protocol::detail
