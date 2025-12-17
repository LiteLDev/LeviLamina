#include "mc/deps/core/container/BlobHelper.h"
#include "mc/deps/core/container/Blob.h"

namespace mce::BlobHelper {
mce::Blob clone(const mce::Blob& blob) {
    if (blob.size() == static_cast<size_t>(-1) || (!blob.data() && blob.size())) throw std::logic_error("invalid blob");

    Blob result(blob.size());
    if (blob.size()) std::memmove(result.data(), blob.data(), blob.size());
    return result;
}

} // namespace mce::BlobHelper