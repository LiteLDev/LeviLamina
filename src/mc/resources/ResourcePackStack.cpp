#include "mc/resources/ResourcePackStack.h"
#include "mc/resources/PackInstance.h"
#include <optional>

void ResourcePackStack::add(
    PackInstance                                                        packInstance,
    Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& repo,
    bool                                                                isDependent
) {
    std::optional<std::string> levelId;
    _populateDependencies(mStack, packInstance, repo, isDependent, levelId);
}
