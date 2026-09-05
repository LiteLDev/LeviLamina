# Sending Protocol Payloads

A send succeeds only through an active negotiated `Session`, on the correct endpoint game thread, for a registered outbound payload. Sending is immediate: LeviLamina does not queue a message until login, renegotiation, or thread availability.

## Acquire a session

On the client target, obtain the currently active remote-server session:

```cpp
#include "ll/api/protocol/Client.h"

auto session = ll::protocol::client::currentSession();
if (!session) {
    return ll::forwardError(session.error());
}
```

On the dedicated-server target, address a specific Minecraft connection and subclient:

```cpp
#include "ll/api/protocol/Server.h"

auto session = ll::protocol::server::getSession(recipient);
if (!session) {
    return ll::forwardError(session.error());
}
```

Here `recipient` may be a `NetworkIdentifierWithSubId` or a `Player const&`. The player overload preserves both the connection identifier and its actual subclient ID. A shared `NetworkIdentifier` alone is not a complete protocol recipient.

`Session` is a revocable handle to one connection generation. `session.active()` is useful as a hint, but it is not a promise that a later send will succeed. Disconnect, timeout, runtime shutdown, registry change, and reconnect can invalidate the handle between the check and the send. The send result is authoritative.

The session's immutable `SessionView` exposes the negotiated modules, payloads, schema, limits, role, registry revision, and peer identity:

```cpp
auto view = session->view();
auto id   = ll::protocol::PayloadId::parse("example:gameplay/set_label");
if (!id) {
    return ll::forwardError(id.error());
}

if (view.findPayload(*id) == nullptr) {
    // This optional capability was not negotiated.
}
```

For optional modules and payloads, inspect the view or handle `SessionErrc::NotNegotiated`. Never infer availability solely from installed local mods.

## Check negotiated features

A feature has no separate send function. Before sending a payload or choosing fields whose meaning depends on a feature, find its owning module in the session view and inspect the negotiated feature list:

```cpp
auto moduleId = ll::protocol::ModuleId::parse("example:gameplay");
if (!moduleId) return ll::forwardError(moduleId.error());

auto featureName = ll::protocol::FeatureName::parse("delta_updates");
if (!featureName) return ll::forwardError(featureName.error());

auto view   = session->view();
auto module = view.findModule(*moduleId);
if (module == nullptr) {
    // The module was not negotiated; do not send module payloads.
    return {};
}

auto feature = std::ranges::find(module->features, *featureName, &ll::protocol::NegotiatedFeature::name);
if (feature == module->features.end()) {
    // The optional feature was not negotiated; use the base behavior or skip the operation.
    return {};
}

if (feature->version >= 2) {
    // Produce the version 2 behavior negotiated for this exact session.
}
```

Parse and retain stable identifiers during protocol setup rather than reparsing string literals for every send. Never use the locally declared maximum feature version as the peer capability: different active sessions may select different versions.

## Send from a client

The client form is `Session::sendToServer`:

```cpp
SetLabelRequest payload{
    .entityId = selectedEntityId,
    .label    = "merchant",
};

if (auto sent = session->sendToServer(payload); !sent) {
    return ll::forwardError(sent.error());
}
```

The registered type must have direction `ClientToServer`. LeviLamina selects the schema and encoded limit negotiated for this exact session; mod code does not choose a schema at send time.

## Send from a server

For one previously acquired session, use `Session::send`:

```cpp
StatusUpdate payload{/* fields */};
if (auto sent = session->send(payload); !sent) {
    return ll::forwardError(sent.error());
}
```

The registered type must have direction `ServerToClient`.

For a list of Minecraft recipients, `server::sendTo` resolves each session and returns an aggregate result:

```cpp
auto result = ll::protocol::server::sendTo(recipients, payload);
if (!result) {
    return ll::forwardError(result.error());
}

logger.info(
    "protocol fan-out: requested={}, sent={}, failed={}",
    result->requested,
    result->sent,
    result->failed
);

for (auto const& failure : result->failures) {
    logger.warn("recipient {}: {}", failure.recipientIndex, failure.error.message());
}
```

`requested` counts input entries, `attempted` counts recipients whose sessions resolved, and `sent` and `failed` report the per-recipient outcome. Failures are retained only up to `FanoutOptions::maxReportedFailures`, capped by the protocol; check `failuresTruncated` before assuming the vector describes every failure.

To target all currently active server sessions, use `server::broadcast`:

```cpp
auto result = ll::protocol::server::broadcast(payload, {
    .maxReportedFailures = 32,
});
if (!result) {
    return ll::forwardError(result.error());
}
```

A broadcast snapshots the active sessions when the call begins. Connections established or closed concurrently are not made transactionally consistent with the entire fan-out. Different recipients may have negotiated different schemas or limits; LeviLamina groups compatible recipients and encodes once per compatible cohort.

## Respect the thread contract

All send APIs in version 1 must run on the appropriate endpoint game thread. A call from another thread returns `SessionErrc::WrongThread`; it is not automatically rescheduled.

- Use the client game thread for `sendToServer`.
- Use the server thread for `send`, `sendTo`, and `broadcast`.
- If work originates elsewhere, schedule a bounded task through the appropriate LeviLamina executor.
- Acquire or revalidate the session inside the scheduled task, because the old generation may have closed while the task was waiting.

Do not block the game thread waiting for a network reply. Define a later inbound payload as the response and correlate it with a feature-specific request ID if the operation requires request/response behavior.

## Handle failures explicitly

Common session errors include:

| Error | Meaning |
| --- | --- |
| `NotFound` | No protocol session exists for the requested recipient. |
| `Closed` | The session was revoked. |
| `WrongGeneration` | The handle belongs to an older connection generation. |
| `WrongThread` | The send ran outside the endpoint game thread. |
| `WrongState` | Negotiation or ordinary login has not reached the active state. |
| `NotNegotiated` | The payload is not part of this session contract. |
| `WrongDirection` | The local endpoint cannot send this payload direction. |
| `RegistryChanged` | The descriptor generation changed after negotiation. |
| `RateLimited` | The outbound rate budget rejected the send. |
| `TransportUnavailable` | The endpoint transport is not available. |

Codec and transport errors can also be returned. Do not retry blindly: most failures require a lifecycle change, mod-controlled backoff, or a corrected payload. There is no implicit retry, offline queue, or backpressure wait.

See [Receiving Payloads](receiving_payload.md) for handler execution and [Protocol Limitations](limitations.md) for the size and topology boundaries.
