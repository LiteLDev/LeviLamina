# Registering Protocol Modules and Payloads

Registration publishes a mod-owned compatibility declaration and binds C++ codecs and handlers to it. Register during the owning mod's normal setup, retain every returned token for as long as the surface is available, and handle every `Expected` failure.

## Declare the protocol namespace

Set `protocolNamespace` in the native mod manifest:

```json
{
    "entry": "ExampleMod.dll",
    "name": "ExampleMod",
    "type": "native",
    "protocolNamespace": "example"
}
```

If `protocolNamespace` is absent, LeviLamina attempts to use the manifest `name`. An ordinary display name often does not satisfy protocol identifier syntax, so declaring a short, stable, lowercase namespace is recommended.

The namespace `levilamina` is reserved for core protocol messages. Third-party manifests and ordinary mod registrations cannot claim it. A namespace may have only one owning mod identity in a process; matching text from a different loaded mod does not grant ownership.

Changing a released namespace changes every module and payload wire ID. Treat it like a compatibility-breaking rename.

## Register a module

Create local identifiers through their parsers and register a `ModuleDefinition` with the global registry:

```cpp
#include "ll/api/protocol/PayloadRegistry.h"

auto moduleName = ll::protocol::ModuleName::parse("gameplay");
if (!moduleName) {
    return ll::forwardError(moduleName.error());
}

auto deltaUpdates = ll::protocol::FeatureName::parse("delta_updates");
if (!deltaUpdates) {
    return ll::forwardError(deltaUpdates.error());
}

auto module = ll::protocol::PayloadRegistry::getInstance().registerModule({
    .name             = *moduleName,
    .version          = {1, 0, 0},
    .protocolVersions = {1, 1}, // min, max
    .requirement      = ll::protocol::ModuleRequirement::Optional,
    .features         = {
        {
            .name     = *deltaUpdates,
            .versions = {1, 2}, // min, max
            .required = false,
        },
    },
});
if (!module) {
    return ll::forwardError(module.error());
}
```

By default, `registerModule` infers the owner from `mod::NativeMod::current()`. The owner determines the namespace, enable state, callback lifetime, and automatic drain behavior. Pass an explicit `weak_ptr<mod::Mod>` only from loader infrastructure that already has the correct owning object; it is not a mechanism for borrowing another mod's namespace.

The module name is local. With the manifest above, LeviLamina derives the complete module ID `example:gameplay`.

Choose the requirement deliberately:

- `Optional` allows a session without this module;
- `RequiredOnClient` requires the client declaration;
- `RequiredOnServer` requires the server declaration;
- `RequiredOnBoth` requires both declarations.

The module version describes the mod module release. `protocolVersions` instead describes compatible revisions of that module's wire contract; it is independent of the LeviLamina core handshake version and is not a replacement for the semantic module version.

## Declare module features

A feature is registered as a `FeatureDefinition` inside `ModuleDefinition::features`; it has no separate registry call or ownership token. Its name is local to the module, its `versions` range describes compatible revisions of that capability, and `required` determines whether the module may remain compatible when the peer omits the feature or advertises a disjoint range.

### Why use a feature

A feature is a negotiated capability switch inside an otherwise compatible module. It lets two endpoints agree that they both support an independently optional behavior and select the exact revision to use for this session. Typical examples are delta updates, batching, an optional compression mode, richer diagnostics, or an optimized operation that can fall back to established base behavior.

Without a feature declaration, mod code would have to guess capability support from the peer's mod version, attempt a message and wait for failure, or require every peer to implement the optional behavior. Feature negotiation makes the decision explicit before either endpoint uses that behavior, and the selected version is recorded separately for every active session.

Use the appropriate compatibility mechanism:

- use a feature when behavior within one module is independently optional or has its own small capability version;
- use a payload schema when the binary layout of one payload evolves;
- use a new payload when introducing a distinct message;
- use a separate module when functionality needs an independent requirement policy, protocol range, or registration lifecycle.

Mark a feature required only when the module cannot operate correctly without it. If older peers can continue with base behavior, keep the feature optional and branch on its presence in the negotiated session view.

During negotiation, a feature is selected only when both endpoints declare the same name with overlapping version ranges. LeviLamina selects the highest common version. A missing or incompatible optional feature is omitted from the negotiated module. If either endpoint marks that feature required, the module becomes incompatible; the module requirement policy then determines whether the module is disabled for the session or the handshake fails.

Feature negotiation does not register a callback and does not automatically enable or disable payload handlers. Register the module's payloads normally, then inspect the negotiated feature in the session view before sending or applying feature-specific behavior. Keep stable parsed `ModuleId` and `FeatureName` values in the mod's protocol state when they are needed repeatedly.

## Register payloads on each target

Call `registerPayload<T>` with the module token, a `PayloadDefinition`, and the codec. On a target that can receive the declared direction, a handler is mandatory.

For the client-to-server `SetLabelRequest` from the previous guide, the client registers the outbound payload without a handler:

```cpp
auto payloadName = ll::protocol::PayloadName::parse("set_label");
if (!payloadName) {
    return ll::forwardError(payloadName.error());
}

auto request = ll::protocol::PayloadRegistry::getInstance()
                   .registerPayload<SetLabelRequest>(
                       *module,
                       {
                           .name           = *payloadName,
                           .direction      = ll::protocol::PayloadDirection::ClientToServer,
                           .requirement    = ll::protocol::PayloadRequirement::Required,
                           .schemas        = {1},
                           .maxEncodedSize = 256,
                       },
                       SetLabelCodec{}
                   );
if (!request) {
    return ll::forwardError(request.error());
}
```

The server registers the same definition and codec with a receiving handler:

```cpp
auto request = ll::protocol::PayloadRegistry::getInstance()
                   .registerPayload<SetLabelRequest>(
                       *module,
                       {
                           .name           = *payloadName,
                           .direction      = ll::protocol::PayloadDirection::ClientToServer,
                           .requirement    = ll::protocol::PayloadRequirement::Required,
                           .schemas        = {1},
                           .maxEncodedSize = 256,
                       },
                       SetLabelCodec{},
                       [](ll::protocol::PayloadContext const& context, SetLabelRequest&& value)
                           -> ll::Expected<> {
                           // Validate authorization and apply a bounded operation here.
                           return {};
                       }
                   );
if (!request) {
    return ll::forwardError(request.error());
}
```

Both endpoints must describe a compatible ID, direction, requirement, schema set, and limit for negotiation to expose the payload. The complete derived ID is `example:gameplay/set_label`.

A C++ type can identify only one active payload registration in a target process. Use distinct wrapper types even when two messages happen to contain identical fields.

## Retain the move-only tokens

`ModuleRegistration` and `PayloadRegistration` are move-only ownership tokens. Store them in the mod's protocol state:

```cpp
class ProtocolSurface {
    ll::protocol::ModuleRegistration  mModule;
    ll::protocol::PayloadRegistration mSetLabel;
};
```

Moving a token transfers ownership. Destroying it or calling `reset()` revokes its registration. Destroy payload tokens before their module token; resetting a module while payloads remain registered returns `RegistrationErrc::PayloadsStillRegistered`.

Do not discard a successful token at the end of a setup function. That unregisters the declaration immediately.

## Enable, disable, and unload behavior

A registration created while its owner is disabled remains pending. It is not published for negotiation until the mod becomes enabled. When the owner is disabled, LeviLamina drains its registrations and in-flight callbacks before the mod's disable callback or native library unload can invalidate code.

Registry changes do not renegotiate an active connection in place. Affected sessions are revoked, and a later connection negotiates a fresh registry generation. Registration code must therefore not assume that adding a payload immediately changes an existing session.

Keep registration and handler state owned by the same mod lifetime. Capturing another mod's raw objects in a handler does not extend their lifetime and bypasses the registry's owner guarantee.

## Handle registration errors

Registration APIs return `Expected<T>` and do not make partial declarations usable after failure. Relevant error families include:

| Error | Meaning |
| --- | --- |
| `OwnerUnavailable` | The inferred or supplied owner no longer exists. |
| `OwnerDisabled` | The operation requires an enabled owner. |
| `ReservedNamespace` | A mod attempted to use a core-only namespace. |
| `NamespaceOwned` | Another mod identity already owns the namespace. |
| `DuplicateModule`, `DuplicatePayload`, `DuplicateType` | The declaration conflicts with an active registration. |
| `TombstoneMismatch` | A previously used payload ID is being reused with incompatible ownership or direction. |
| `InvalidDirection` | The receiving target did not provide a handler. |
| `EmptySchemaSet`, `DuplicateSchema` | The schema declaration is malformed. |
| `InvalidLimit` | A size, count, or generation limit is invalid or exhausted. |
| `PayloadsStillRegistered` | The module cannot reset until its payloads are reset. |

Log the structured error and leave the affected protocol feature unavailable. Do not continue with a default token or silently invent a replacement ID; either action can produce a client/server declaration mismatch.

After registration, use a negotiated `Session` to send the payload. [Sending](sending_payload.md) and [receiving](receiving_payload.md) are covered by the next guides; thread, lifecycle, and size boundaries are summarized in [Protocol Limitations](limitations.md).
