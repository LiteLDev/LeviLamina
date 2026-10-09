# Protocol Migration and Release Note

LeviLamina protocol version 1 introduces a supported, typed networking surface for cooperating remote client and dedicated-server mods. It adds mod-owned namespaces, module and feature negotiation, schema-selected payloads, bounded codecs, revocable sessions, lifecycle events, and server fan-out.

This is a new API, not a transparent compatibility layer for existing raw packet channels. Existing peers must be updated together or kept on their previous transport until a coordinated migration is complete.

## Migrating an existing LeviLamina channel

For every legacy logical message:

1. identify the owning mod and declare a stable `protocolNamespace` in its manifest;
2. group related messages into a local protocol module;
3. give each message a stable local payload name and exactly one direction;
4. replace raw BinaryStream access with a bounded `Encoder`/`Decoder` codec;
5. assign schema 1 to the documented current byte meaning;
6. set a maximum body size based on valid payload data, not the transport hard cap;
7. register matching declarations on the client and server targets;
8. retain move-only registration tokens for the enabled lifetime;
9. acquire an active negotiated `Session` before sending and handle all `Expected` failures;
10. remove the legacy channel only after mixed-version deployment behavior is intentional.

Do not preserve a legacy numeric runtime ID by hard-coding it into the new API. Protocol runtime IDs are derived from the complete stable text ID and verified during negotiation.

If the old message was bidirectional, split it into two types and IDs. If it relied on an unbounded string, list, NBT document, or byte blob, define a semantic field limit before migration.

## Porting Fabric custom payloads

A Fabric-style custom payload normally maps as follows:

| Fabric concept | LeviLamina protocol concept |
| --- | --- |
| Mod ID namespace | Manifest `protocolNamespace` |
| Channel or payload identifier | Module name plus payload name |
| `CustomPayload` record/class | C++ payload value type |
| `PacketCodec` | `PayloadCodec` using `Encoder` and `Decoder` |
| C2S/S2C registration | One `PayloadDirection` and target-specific handler registration |
| Connection capability check | `SessionView::findPayload` or send result |
| Networking callback | `PayloadHandler<T>` on the endpoint game thread |

Do not transliterate Java serialization helpers mechanically. Re-evaluate integer representation, UTF-8 limits, collection counts, enum validation, and trailing-byte behavior as a new bounded wire contract.

## Porting Forge or NeoForge channels

A `SimpleChannel` or similar channel usually becomes one protocol module. Message registrations become distinct stable payload IDs rather than registration-order discriminators. Protocol ranges, features, payload schemas, and requirement policies replace a single broad channel-version predicate.

Avoid carrying these Java assumptions into the port:

- registration order is not a stable message identity;
- class names are not wire IDs;
- one handler may not safely run on both logical sides;
- enqueue-work behavior is not implicit in LeviLamina protocol;
- a negotiated mod is not authorization for a client-requested game action.

LeviLamina handlers already run on the supported endpoint game thread. Expensive or blocking mod work must be offloaded explicitly, and any later response must return to that endpoint thread and re-check session generation.

## Rolling deployment

For a feature that can degrade gracefully:

1. release the module and payloads as optional on both targets;
2. keep the old behavior or disable only the new feature when no session/capability exists;
3. observe the negotiated surface through `SessionView`;
4. remove the fallback or tighten requirements only in a coordinated later release.

For a feature that cannot operate safely without the peer component, declare the correct module/payload requirement and accept that incompatible LL peers will fail negotiation. A server that must reject clients without LeviLamina discovery must additionally set `requireLoader`; module requirements alone apply after LL negotiation begins.

There is no dynamic renegotiation. Installing, enabling, disabling, or replacing declarations closes affected active sessions; reconnect after both endpoints have reached their intended deployment state.

## Version 1 release boundaries

The first release supports a remote LeviLamina client connected to a dedicated LeviLamina server. LL-to-vanilla and vanilla-to-optional-LL login remain ordinary Minecraft sessions without protocol payloads.

The release does not support integrated/local hosting, arbitrary-thread sends, dynamic renegotiation, streaming, transparent fragmentation, or `BulkTransfer`.

Start with [Creating a Protocol Payload](creating_payload.md), then follow [Registering Protocol Modules and Payloads](registering_payload.md).
