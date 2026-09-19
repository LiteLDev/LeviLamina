# Protocol Compatibility

LeviLamina preserves ordinary Minecraft login whenever protocol participation is optional. Negotiation occurs only between a dedicated LeviLamina server and a remote LeviLamina client that both enable the protocol and advertise a valid discovery marker.

## Endpoint matrix

| Client | Server | Policy | Outcome |
| --- | --- | --- | --- |
| LL protocol enabled | LL protocol enabled | Compatible required declarations | Protocol negotiation completes, then Minecraft login completes and a session becomes active. |
| LL protocol enabled | Vanilla | Any LL client policy | Vanilla login continues; the client classifies the peer as non-protocol and creates no session. |
| Vanilla or protocol disabled | LL | `requireLoader: false` | Vanilla login continues without negotiation or a session. |
| Vanilla or protocol disabled | LL | `requireLoader: true` | The server rejects login with a loader compatibility reason. |
| LL protocol enabled | LL protocol disabled | `requireLoader` is inactive with the protocol | Ordinary non-protocol Minecraft behavior; no protocol hooks or session. |
| Any local client combination | Local world | Any | Classified as non-protocol in version 1. |

Once an LL handshake has begun, a timeout, malformed message, digest mismatch, or incompatible required declaration is a protocol failure. The endpoints do not silently downgrade that connection to vanilla after committing to negotiation.

For an incompatible LL peer, the server sends a fatal protocol error code and a bounded diagnostic before closing the connection. The disconnect packet also carries a user-facing reason; a missing required module includes its complete module ID. Expected compatibility failures and rejected peer traffic are not written as loader errors on the server. Local internal, codec-callback, and transport failures remain error-level diagnostics.

## Loader policy and module policy are different

Server `requireLoader` controls whether a connecting client must participate in LeviLamina protocol discovery at all. It does not require every installed mod or module.

Server `requiredModules` is a list of complete module IDs such as `example:gameplay`. Each listed module must exist in the server declaration and is promoted to require a compatible client declaration. Invalid, duplicate, or locally missing configured IDs are configuration or negotiation failures; they are not ignored.

Module declarations provide their own cross-endpoint policy:

| Requirement | Missing endpoint that makes negotiation fail |
| --- | --- |
| `Optional` | Neither; the module is disabled if compatibility cannot be found. |
| `RequiredOnClient` | Client. |
| `RequiredOnServer` | Server. |
| `RequiredOnBoth` | Either endpoint. |

If both declarations exist but their module protocol ranges or required features are incompatible, a non-optional module fails negotiation. An optional module is disabled instead.

`requiredModules` affects module negotiation, not vanilla discovery. If a server must reject clients without any LL loader, use `requireLoader` as well.

## Payload compatibility

A payload can be negotiated only when:

- its containing module is enabled;
- both endpoints declare the same complete payload ID;
- both declarations agree on direction and deterministic runtime ID;
- the schema sets have at least one common version.

The highest common schema is selected. The negotiated maximum encoded body is the smallest of the client declaration, server declaration, negotiated transport configuration, and protocol hard cap.

If an incompatible or missing payload is `Optional`, that payload is disabled. If either declaration marks it `Required`, its containing module is disabled; negotiation fails when that module is itself required. Mod code must inspect `SessionView` before assuming an optional capability exists.

## Features inside a module

A feature has a stable local name, version range, and `required` flag. A feature is enabled only when both endpoints declare it with an overlapping range; the highest common version is selected.

A missing or incompatible optional feature is omitted. A missing or incompatible feature marked required by either endpoint makes the module incompatible, after which the module's requirement policy decides whether it is disabled or the handshake fails.

Use features for independently optional behavior within an otherwise compatible module. Use a separate module when the component needs its own lifecycle or requirement policy.

## Minecraft and mod version skew

Protocol compatibility does not override LeviLamina's supported Minecraft-version matrix or native ABI requirements. Client and server mods may use different implementation builds only when their declared wire contracts actually overlap. Never use C++ layout, RTTI names, or shared-library ABI as a cross-process payload format.

See [Versioning](versioning.md) for compatible evolution patterns and [Protocol Limitations](limitations.md) for the supported deployment scope.
