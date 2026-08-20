#include "ll/core/protocol/PayloadDispatcher.h"

#include "ll/api/protocol/Error.h"
#include "ll/api/protocol/PayloadRegistry.h"
#include "ll/core/protocol/PayloadRegistryInternal.h"
#include "ll/core/protocol/ProtocolEnvelopePacket.h"
#include "ll/core/protocol/ProtocolSession.h"
#include "ll/core/protocol/RegistrationLease.h"

namespace ll::protocol::detail {

Expected<> PayloadDispatcher::dispatch(
    std::shared_ptr<ProtocolSession> const& session,
    ProtocolEnvelopePacket const&           packet
) const noexcept {
    try {
        if (!session) return makeSessionError(SessionErrc::NotFound);

        auto runtimeId = static_cast<std::uint64_t>(packet.getRuntimeId());
        if (auto valid =
                session
                    ->validateInbound(runtimeId, packet.envelopeSchema(), packet.payloadSchema(), packet.body().size());
            !valid) {
            return valid;
        }

        auto negotiated = session->findNegotiated(runtimeId);
        if (!negotiated) return makeProtocolError(ProtocolErrc::UnknownPayload);

        auto& registry = PayloadRegistry::getInstance();

        auto state = PayloadRegistryAccess::findState(registry, negotiated->payload.id);
        if (!state) return makeProtocolError(ProtocolErrc::UnknownPayload, negotiated->payload.id.str());

        auto descriptor = state->descriptor();
        if (descriptor->runtimeId() != runtimeId || descriptor->generation() != negotiated->descriptorGeneration) {
            return makeSessionError(SessionErrc::RegistryChanged, negotiated->payload.id.str());
        }
        if (descriptor->definition().direction != negotiated->payload.direction
            || !canReceive(session->role(), descriptor->definition().direction)) {
            return makeSessionError(SessionErrc::WrongDirection, negotiated->payload.id.str());
        }
        if (!state->hasHandler()) {
            return makeProtocolError(ProtocolErrc::UnknownPayload, negotiated->payload.id.str());
        }

        auto lease = RegistrationLease::acquire(state, negotiated->descriptorGeneration);
        if (!lease) return forwardError(lease.error());

        if (!session->active(session->generation())) return makeSessionError(SessionErrc::Closed);

        auto context = SessionAccess::makeContext(session);
        return state->dispatch(context, packet.body(), packet.payloadSchema());
    } catch (...) {
        return makeExceptionError();
    }
}

} // namespace ll::protocol::detail
