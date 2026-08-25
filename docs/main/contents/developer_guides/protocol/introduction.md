# LeviLamina Protocol

The LeviLamina protocol is the supported way for a modded client and a dedicated server to exchange typed, mod-defined payloads. It provides discovery, capability and version negotiation, bounded serialization, session lifecycle, and compatibility with ordinary Minecraft login.

The protocol does not replace Minecraft networking. Minecraft remains responsible for connection establishment, authentication, encryption, compression, reliability, ordering, packet splitting, and reassembly. LeviLamina carries its control messages and negotiated payloads through the existing Minecraft transport and validates them before mod code is called.

## When to use it

Use the protocol when a feature has cooperating client and server components, for example:

- a client interface that submits an action to the server;
- server state displayed by a client-side overlay;
- additional gameplay state that vanilla packets do not represent;
- a port of a Java Edition mod that previously used Fabric custom payloads or a Forge/NeoForge networking channel.

A server-only mod that already works through commands, forms, events, or vanilla packets usually does not need a protocol module. A purely visual client-only mod does not need one either.

## Supported topology

Version 1 supports a dedicated LeviLamina server and a remote LeviLamina client. A protocol session exists only when both endpoints enable the protocol, complete negotiation, and finish ordinary Minecraft login.

| Client | Dedicated server | Result |
| --- | --- | --- |
| LeviLamina protocol enabled | LeviLamina protocol enabled | Compatible modules and payloads are negotiated. |
| LeviLamina protocol enabled | Vanilla (or non-LeviLamina server) | Minecraft login continues normally; no protocol session is created. |
| Vanilla or protocol disabled | LeviLamina, optional loader policy | Minecraft login continues normally; no protocol session is created. |
| Vanilla or protocol disabled | LeviLamina, required loader policy | Login is rejected with a compatibility reason. |

Local and integrated worlds are intentionally classified as non-protocol Minecraft sessions in version 1. See [Limitations](limitations.md) for the complete supported scope.

## Modules, payloads, and sessions

A mod registers one or more protocol modules. Each module declares its semantic version, compatible module protocol range, features, and whether it is required on the client, server, both endpoints, or neither. A payload belongs to one module and has:

- a stable local name;
- exactly one direction, client-to-server or server-to-client;
- one or more supported schema versions;
- a required or optional compatibility policy;
- an encoded-body size limit;
- a codec and, on the receiving endpoint, a handler.

LeviLamina derives the complete module and payload identifiers from the owning mod's manifest namespace. Negotiation selects compatible modules, payloads, schemas, features, and limits. A payload that was not negotiated cannot be sent or delivered to its handler.

A `Session` is a revocable handle to one negotiated endpoint generation. It becomes active only after both protocol negotiation and Minecraft login succeed. Disconnect, timeout, registry changes, runtime shutdown, or reconnect revoke the old session. Code must therefore handle `Expected` failures even when a previously acquired session was valid.

## Safety contract

Before calling a mod codec or handler, the protocol checks the connection generation, session state, payload identity, direction, schema, declared length, negotiated size limit, and rate budget. Registration tokens are tied to their mod owner and are drained before the owner's disable callback or library unload can invalidate callback code.

Handlers run synchronously on the endpoint game thread. They should validate semantic input quickly and offload only mod-owned work whose lifetime and cancellation are managed by the mod. Protocol sends are also restricted to the appropriate endpoint game thread in version 1.

## Next steps

The remaining guides cover payload and codec design, registration, sending, receiving, lifecycle, compatibility, and version evolution. The [protocol API reference](../../api_reference/protocol.md) summarizes the public types and error families. Start with [Creating a Protocol Payload](creating_payload.md) before registering a module: stable names, direction, schemas, and size limits form a compatibility contract.
