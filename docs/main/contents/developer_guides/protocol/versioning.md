# Protocol Versioning

The protocol has several independent version layers. Keeping them separate lets mods evolve their protocol payloads without coupling every change to LeviLamina's core handshake version.

## Version layers

| Layer | Declared by | Purpose |
| --- | --- | --- |
| Core protocol version | LeviLamina | Control messages, negotiation rules, transcript, and envelope semantics. |
| Module semantic version | `ModuleDefinition::version` | Informational version of the mod-owned module declaration. |
| Module protocol range | `ModuleDefinition::protocolVersions` | Compatible revisions of the module-wide wire contract. |
| Feature version range | `FeatureDefinition::versions` | Compatible revisions of one optional or required capability. |
| Payload schema | `PayloadDefinition::schemas` | Exact encoded field layout and meanings for one payload ID. |

The negotiated `SessionView` records the selected core protocol version, module protocol version, feature versions, and payload schema. The module semantic version is not used as a substitute for schema compatibility.

## Stable IDs and runtime IDs

Module and payload text IDs are the public wire identities:

```text
example:gameplay
example:gameplay/set_label
```

LeviLamina deterministically hashes the complete payload ID into its runtime ID. The hash is an efficient transport slot, not a mod-selected version and not a collision escape hatch. Negotiation verifies that the text identity and runtime ID agree and fails closed on a collision.

C++ type names, namespaces, RTTI spelling, field offsets, and compiler ABI do not participate in either stable text ID.

## Compatible schema evolution

Suppose schema 1 encodes:

```text
u32 entityId
string label (maximum 64 bytes)
```

A newer implementation can add schema 2:

```text
u32 entityId
string label (maximum 64 bytes)
bool persistent
```

During a compatibility window, register `.schemas = {1, 2}` and implement both codec branches. Two new peers select schema 2; a new peer and an old peer select schema 1. Removing schema 1 later intentionally ends compatibility with peers that support only schema 1.

Do not append the boolean while still calling the format schema 1. Decoders require complete consumption, so old decoders correctly reject the trailing byte.

Compatible changes that do not require a new schema include internal C++ refactoring, faster validation, and bug fixes that preserve every accepted byte meaning. Changes that normally require a new schema include adding/removing fields, changing order or integer width, changing units, changing canonical string rules, or changing whether a value is optional.

## Module protocol evolution

`ModuleDefinition::protocolVersions` versions the module-wide wire contract; it is independent of LeviLamina's core handshake version. Use it when a compatibility change affects how multiple payloads or behaviors work together and cannot be represented cleanly by one payload schema or an optional feature.

During a compatibility window, advertise a range such as `{1, 2}` and support the behavior selected for each session. `NegotiatedModule::protocolVersion` contains the highest version shared by both endpoints. Raise the minimum only after support for the older module protocol has intentionally ended.

Do not increment the module protocol version for an internal implementation change, one payload layout change, or an independently optional capability. Use the narrower schema or feature version for those cases.

## Feature evolution

Introduce new optional behavior as an optional feature with a defined fallback. During rollout, advertise every feature version the implementation can actually handle; negotiation selects the highest common version and records it in `NegotiatedFeature::version` for that session.

Raise the feature minimum only when the older behavior is no longer supported. Removing an optional feature declaration causes it to be omitted when negotiating with peers that still advertise it. Removing or making incompatible a feature required by either endpoint makes the containing module incompatible, so coordinate that change according to the module requirement policy.

A feature version changes capability semantics, not payload bytes. If enabling a new feature revision also changes a payload layout, introduce a new payload schema and explicitly define which feature/schema combinations the mod accepts.

## When to create a new payload or module

Create a new payload ID when the operation's meaning changes rather than merely its representation. For example, `set_label` and `patch_entity_metadata` should not share an ID just because one can emulate the other.

Create a new module when a feature group needs an independent requirement policy, compatibility range, or ownership lifecycle. Avoid a single permanent catch-all module if unrelated features will evolve independently.

Do not reuse a removed payload ID for new semantics. The registry preserves tombstone identity and direction to prevent unsafe reactivation within a process, but compatibility also depends on mods respecting released IDs across versions.

## Requirement evolution

Tightening an optional module, feature, or payload to required can reject peers that previously connected successfully. Treat it as a deployment-policy change and coordinate both endpoints before release.

Prefer this rollout order:

1. release both endpoints with the new capability optional and compatible fallback behavior;
2. allow installations to upgrade and observe negotiated availability;
3. require the capability only in a later coordinated release when rejecting old peers is intentional.

The server's `requiredModules` setting can enforce a deployed module without rebuilding it, but only after the server actually registers that module.

## Size-limit evolution

The negotiated body limit is the minimum declared by both peers and the transport configuration. Increasing a local limit does not force an old peer to accept larger messages. A sender must encode within the current session's negotiated limit.

Reducing a limit is wire-compatible only when every valid encoded value for all advertised schemas still fits. If old valid values can exceed the new limit, coordinate the change as a semantic compatibility break or introduce a new bounded representation.

See [Creating a Protocol Payload](creating_payload.md) for codec rules and [Compatibility](compatibility.md) for the negotiation failure table.
