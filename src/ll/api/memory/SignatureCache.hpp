#pragma once

#include <unordered_map>
#include <string>
#include <mutex>
#include "ll/api/memory/Memory.h"

namespace ll::memory {

/**
 * @brief Global signature cache for resolved function addresses
 * 
 * This cache stores resolved function addresses keyed by their signature strings,
 * allowing multiple plugins to share resolved addresses without redundant searches.
 * Thread-safe implementation using mutex for concurrent access.
 */
class SignatureCache {
public:
    /**
     * @brief Get cached address for a signature
     * 
     * @param signature[in] The signature string to lookup
     * @return FuncPtr Cached address or nullptr if not found
     */
    static FuncPtr get(std::string const& signature);
    
    /**
     * @brief Cache a resolved address
     * 
     * @param signature[in] The signature string
     * @param address[in] The resolved function address
     */
    static void set(std::string const& signature, FuncPtr address);
    
private:
    /// @brief Cache storage mapping signatures to function addresses
    static std::unordered_map<std::string, FuncPtr> mCache;
    
    /// @brief Thread safety mutex for concurrent access
    static std::mutex mMutex;
};

} // namespace ll::memory