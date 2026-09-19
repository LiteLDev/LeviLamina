# Protocol Limitations

This page defines the supported LeviLamina protocol version 1 scope. Behavior outside this scope must not be relied on, even if a particular runtime experiment appears to work.

## Supported deployment

The supported topology is a dedicated LeviLamina server and a remote LeviLamina client using the matching supported Minecraft and LeviLamina versions.

The following topologies **are unsupported** in version 1:

- local-world hosting;
- activating a server-role protocol endpoint inside the client target;
- universal mod binaries that assume both client and server protocol APIs are present in one target;
- using a local player connection as a protocol session between two client-side components.

Local worlds remain ordinary non-protocol Minecraft sessions, including when the installed client mods happen to match.

## Threading

Sending is supported only from the appropriate endpoint game thread:

- client-to-server sends use the client game thread;
- server sends, targeted fan-out, and broadcast use the server thread;
- payload handlers execute inline on the receiving endpoint game thread.

Arbitrary-thread sending is unsupported. There is no implicit protocol queue, executor hop, retry, or backpressure wait. A mod that produces work elsewhere must explicitly schedule a bounded task on the appropriate LeviLamina thread executor and re-check session validity when that task runs.

Handlers must remain bounded and nonblocking. Blocking I/O, unbounded parsing, or waiting for another game-thread task inside a handler can stall or deadlock the endpoint.

## Payload sizes and transfer model

The default maximum encoded body is `Limits::DefaultPayloadBody` (256 KiB). A payload definition may select a smaller value or raise it up to `Limits::MaxPayloadBody` (8 MiB). Values above that hard limit are rejected.

These limits describe the encoded protocol body, not the complete reconstructed Minecraft packet. Minecraft also has direction-dependent packet limits and framing overhead. A payload must leave sufficient headroom for its envelope and must not treat the 8 MiB protocol cap as a transport guarantee.

Version 1 sends one logical payload in one protocol envelope. It provides no:

- `BulkTransfer` API;
- transparent fragmentation or reassembly;
- multi-message transaction;
- streaming body;
- resumable transfer;
- disk-backed buffering.

## Negotiation and registry changes

Negotiation happens during login. Dynamic renegotiation on an active session is unsupported.

Register protocol modules and payloads during the owning mod's normal setup. A relevant registry change invalidates existing negotiated sessions instead of mutating their negotiated contract in place. Reconnecting creates a new generation and performs a new negotiation.

Registration objects are move-only ownership tokens. Destroying or resetting a token revokes that registration. Mods must retain tokens for the complete period in which their protocol surface is available.

## Transport and authentication

The protocol does not replace or extend Minecraft authentication, authorization, encryption, compression, reliability, ordering, congestion control, packet splitting, or connection ownership. A negotiated module proves only that the peer declared a compatible LeviLamina protocol surface; it grants no gameplay permission.

Payload handlers must still authorize the remote player or operation using normal server-side game state. **Never trust a client request merely because its payload passed protocol validation**.

## Compatibility promises

Stable module and payload names, directions, requirement policies, schemas, and encoded meanings are part of a mod's network compatibility contract. C++ type names, object layout, RTTI spelling, and compiler ABI are not wire identifiers.

Unsupported behavior includes:

- depending on a runtime ID derived from a C++ type name;
- changing the meaning of an existing schema without a compatible decoder;
- sending a payload in the opposite direction;
- assuming a session remains active after disconnect, timeout, registry change, or reconnect;
- assuming optional modules or payloads were negotiated without inspecting the session view.
