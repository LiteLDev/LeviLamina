#pragma once

template <typename T, typename T2, int unk>
struct TypedServerNetId {
    T2 netId;
};

template <typename T, typename T2, int unk>
struct TypedClientNetId {
    T2 netId;
};

template <typename T, typename T2, int unk>
struct TypedRuntimeId {
    T2 netId;
};

template <typename T, typename T2>
class AutomaticID;

template <typename T, typename T2>
struct BidirectionalUnorderedMap;

template <typename T>
struct BlockDataFetchResult;

template <typename T>
struct CommandSelectorResults;

template <typename T>
class Factory;

template <typename T>
class InheritanceTree;

template <typename T, typename T2, int unk>
class ItemStackRequestActionCraft;

template <typename T>
struct ItemStateVariant;

template <typename T>
struct LevelChunkGridAreaElement;

template <typename T>
class OwnerPtrT;

template <typename T>
class ServiceReference;

template <typename T>
class SharedPtr;

template <typename T>
class StackRefResultT;

template <typename T>
class WeakPtr;

template <typename T>
class WeakRefT;

template <typename T>
class SharePtrRefTraits;

template <typename T>
class SubChunkStorage;

template <typename T, typename T2>
class TagRegistry;

template <typename T>
class ToFloatFunction;

template <typename T, typename T2, typename T3, typename T4 = class UNK>
class ViewedEntityContextT;

template <typename T>
class FlagComponent;

template <typename T>
class WeightedChoices;

template <typename T>
class buffer_span;

template <typename T>
class buffer_span_mut;

template <typename T>
class optional_ref;