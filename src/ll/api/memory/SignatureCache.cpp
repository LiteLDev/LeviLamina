#include "ll/api/memory/SignatureCache.hpp"

namespace ll::memory {

std::unordered_map<std::string, FuncPtr> SignatureCache::mCache;
std::mutex SignatureCache::mMutex;

FuncPtr SignatureCache::get(std::string const& signature) {
    std::lock_guard lock(mMutex);
    if (auto it = mCache.find(signature); it != mCache.end()) {
        return it->second;
    }
    return nullptr;
}

void SignatureCache::set(std::string const& signature, FuncPtr address) {
    std::lock_guard lock(mMutex);
    mCache[signature] = address;
}

} // namespace ll::memory