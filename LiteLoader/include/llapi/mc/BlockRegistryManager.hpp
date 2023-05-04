/**
 * @file  BlockRegistryManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class BlockRegistryManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKREGISTRYMANAGER
public:
    class BlockRegistryManager& operator=(class BlockRegistryManager const &) = delete;
    BlockRegistryManager(class BlockRegistryManager const &) = delete;
    BlockRegistryManager() = delete;
#endif

public:

//private:

private:
    /**
     * @symbol ?mClientIdRegistryMap\@BlockRegistryManager\@\@0V?$unordered_map\@W4SubClientId\@\@V?$weak_ptr\@VBlockTypeRegistry\@\@\@std\@\@U?$hash\@W4SubClientId\@\@\@3\@U?$equal_to\@W4SubClientId\@\@\@3\@V?$allocator\@U?$pair\@$$CBW4SubClientId\@\@V?$weak_ptr\@VBlockTypeRegistry\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@A
     */
    MCAPI static class std::unordered_map<enum class SubClientId, class std::weak_ptr<class BlockTypeRegistry>, struct std::hash<enum class SubClientId>, struct std::equal_to<enum class SubClientId>, class std::allocator<struct std::pair<enum class SubClientId const, class std::weak_ptr<class BlockTypeRegistry>>>> mClientIdRegistryMap;
    /**
     * @symbol ?mClientRegistry\@BlockRegistryManager\@\@0V?$weak_ptr\@VBlockTypeRegistry\@\@\@std\@\@A
     */
    MCAPI static class std::weak_ptr<class BlockTypeRegistry> mClientRegistry;
    /**
     * @symbol ?mServerRegistry\@BlockRegistryManager\@\@0V?$weak_ptr\@VBlockTypeRegistry\@\@\@std\@\@A
     */
    MCAPI static class std::weak_ptr<class BlockTypeRegistry> mServerRegistry;
    /**
     * @symbol ?mThreadLocalRegistry\@BlockRegistryManager\@\@0V?$ThreadLocalObject\@V?$weak_ptr\@VBlockTypeRegistry\@\@\@std\@\@V?$allocator\@V?$weak_ptr\@VBlockTypeRegistry\@\@\@std\@\@\@2\@\@Threading\@Bedrock\@\@A
     */
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class std::weak_ptr<class BlockTypeRegistry>, class std::allocator<class std::weak_ptr<class BlockTypeRegistry>>> mThreadLocalRegistry;

};
