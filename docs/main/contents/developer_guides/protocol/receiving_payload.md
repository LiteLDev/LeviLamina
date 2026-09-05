# Receiving Protocol Payloads

A receiving handler is installed with `PayloadRegistry::registerPayload<T>`. LeviLamina validates the envelope, negotiated identity, direction, schema, length, rate budget, descriptor generation, and complete codec consumption before it calls the handler.

## Register the handler on the receiving target

The target that receives a payload must provide a handler. For a client-to-server payload, that is the dedicated server:

```cpp
auto registration = ll::protocol::PayloadRegistry::getInstance()
                        .registerPayload<SetLabelRequest>(
                            module,
                            definition,
                            SetLabelCodec{},
                            [](ll::protocol::PayloadContext const& context, SetLabelRequest&& request)
                                -> ll::Expected<> {
                                return handleSetLabel(context, std::move(request));
                            }
                        );
if (!registration) {
    return ll::forwardError(registration.error());
}
```

For a server-to-client payload, the client registration supplies the handler and the server registration does not. A missing inbound handler is rejected at registration with `RegistrationErrc::InvalidDirection`.

The payload value is passed as an rvalue after successful decoding. Move owned strings, vectors, or other buffers when retaining decoded data; do not retain references to the handler argument.

## Use the handler context

`PayloadContext` supplies only protocol-owned, lifetime-safe views of the delivery:

- `session()` is a handle for the same negotiated session generation;
- `view()` is the immutable negotiated snapshot;
- `role()` is the local endpoint role;
- `peer()` identifies the remote endpoint and exposes its `NetworkIdentifier`, connection generation, connection text, and `subClientId`.

```cpp
ll::Expected<> handleSetLabel(
    ll::protocol::PayloadContext const& context,
    SetLabelRequest&&                   request
) {
    if (context.role() != ll::protocol::EndpointRole::Server) {
        return ll::protocol::makeCodecError(
            ll::protocol::CodecErrc::InvalidValue,
            "set_label received outside the server role"
        );
    }

    auto peer = context.peer();
    // Resolve and authorize the player represented by peer before changing game state.
    // Then validate entityId and label against current server-side state.
    return {};
}
```

`PeerIdentityView::networkIdentifier` is an owned copy. `PeerIdentityView::connection` is a view into the `SessionView` snapshot; do not retain that text after the owning view is destroyed. Copy only text the mod genuinely needs. Likewise, do not treat connection text as an account or authorization identity.

On the dedicated server, `ll::protocol::server::getPlayer(context.view())` resolves the player only while the same protocol connection generation is active. It returns an empty `optional_ref` after disconnect or reconnect, so keep neither the result nor a raw player pointer beyond the current synchronous handler.

## Handle negotiated features

Features do not have their own handlers. A registered payload handler receives the payload normally and uses `context.view()` to determine whether the owning module negotiated the relevant feature and which version was selected:

```cpp
ll::Expected<> handleDeltaUpdate(
    ll::protocol::PayloadContext const& context,
    DeltaUpdate&&                       update,
    ll::protocol::ModuleId const&       moduleId,
    ll::protocol::FeatureName const&    featureName
) {
    auto module = context.view().findModule(moduleId);
    if (module == nullptr) {
        return ll::protocol::makeSessionError(
            ll::protocol::SessionErrc::NotNegotiated,
            moduleId.str()
        );
    }

    auto feature = std::ranges::find(module->features, featureName, &ll::protocol::NegotiatedFeature::name);
    if (feature == module->features.end()) {
        return ll::protocol::makeSessionError(
            ll::protocol::SessionErrc::NotNegotiated,
            featureName.str()
        );
    }

    switch (feature->version) {
    case 1:
        return applyDeltaV1(context, std::move(update));
    case 2:
        return applyDeltaV2(context, std::move(update));
    default:
        return ll::protocol::makeSessionError(
            ll::protocol::SessionErrc::NotNegotiated,
            "unsupported negotiated delta_updates version"
        );
    }
}
```

Connect this function to the transport by calling it from the handler supplied to `registerPayload`. Here `moduleId` and `featureName` are stable parsed identifiers retained by the mod's protocol state:

```cpp
auto featureName = ll::protocol::FeatureName::parse("delta_updates");
if (!featureName) {
    return ll::forwardError(featureName.error());
}

// ...

auto moduleId = module.id();

auto registration = ll::protocol::PayloadRegistry::getInstance()
                        .registerPayload<DeltaUpdate>(
                            module,
                            deltaDefinition,
                            DeltaUpdateCodec{},
                            [moduleId, featureName = *featureName](
                                ll::protocol::PayloadContext const& context,
                                DeltaUpdate&&                       update
                            ) -> ll::Expected<> {
                                return handleDeltaUpdate(
                                    context,
                                    std::move(update),
                                    moduleId,
                                    featureName
                                );
                            }
                        );
if (!registration) {
    return ll::forwardError(registration.error());
}
```

When a valid `DeltaUpdate` arrives, LeviLamina decodes it and invokes this registered lambda. The lambda calls `handleDeltaUpdate`, which checks the feature selected for that exact session and dispatches to the appropriate feature-version implementation. Retain `registration` like every other `PayloadRegistration`; without that token the handler is unregistered.

The sender must perform the same capability check before using feature-specific behavior. The receiver must still verify it because remote input is untrusted and because payload negotiation alone does not imply that every optional feature of the owning module was selected. Use the negotiated version from this session rather than the local feature range.

The protocol authenticates neither the requested game action nor ownership of an entity. A structurally valid client payload remains untrusted input. Server handlers must resolve the current player, check permissions and reachability, validate ranges and state transitions, and enforce feature-specific rate limits where needed.

## Keep handlers bounded and nonblocking

Handlers execute synchronously on the receiving endpoint game thread. This makes ordinary game-state access convenient but establishes a strict latency contract.

A handler should:

- perform bounded semantic validation;
- apply a small game-state operation or enqueue bounded mod work;
- return an `Expected<>` promptly;
- avoid retaining protocol context references;
- make cancellation explicit for any work that outlives the session.

A handler must NOT:

- perform blocking file, database, HTTP, or process I/O;
- wait on a future whose completion requires the same game thread;
- parse an unbounded secondary format inside a decoded string or byte field;
- run an unbounded loop over client-controlled counts;
- sleep for rate limiting or backpressure;
- assume the session will remain active after the handler returns.

The codec's field limits protect byte allocation, not the cost of resulting behavior. For example, a bounded list of 1,000 identifiers may fit easily in the payload limit but still trigger an unacceptable world scan. Add semantic limits based on worst-case handler work.

## Offload mod-owned work safely

If an operation requires blocking or expensive work, copy only the validated values needed by that work and submit them to a mod-owned executor. Do not move `PayloadContext`, `SessionView` spans, game objects, or raw connection pointers to a worker.

When a worker later needs to send a result:

1. schedule a bounded continuation on the correct endpoint game thread;
2. resolve the current session again or use the old handle and accept generation failure;
3. re-check relevant game state and cancellation;
4. send the response and handle its `Expected` result.

This prevents a delayed result from being delivered through a replacement connection that happens to reuse related Minecraft state.

## Return and report failures

Return `{}` only after the payload has been accepted by the handler. Return a structured error when semantic input is invalid or the operation cannot safely proceed. Do not throw across the callback boundary; LeviLamina converts an escaped exception to an error, but an exception is still a handler defect rather than normal control flow.

Malformed envelopes, invalid negotiated metadata, size violations, codec failures, and rate-gate failures are rejected before handler dispatch. Depending on severity and protocol state, the endpoint may report a protocol error and close the protocol session. Mod code should observe lifecycle events rather than assuming that every rejected message leaves the session active.

Handler registration is protected by a lifecycle lease. During mod disable, LeviLamina prevents new callback entry and waits for in-flight callbacks to drain before the owner can unload. The mod must still release its payload tokens and must not create detached work that calls unloaded code.

See [Registering Protocol Modules and Payloads](registering_payload.md) for token ownership and [Protocol Limitations](limitations.md) for the complete threading contract.
