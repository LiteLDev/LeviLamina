#include <MC/CompoundTag.hpp>

void CompoundTag::putEnd(const std::string& k) {
    Tag* tag = Tag::createTag(Tag::Type::End);
    put(k, std::move(*tag));
}
void CompoundTag::putByteArray(const std::string& key, void* data, size_t size) {
    uint8_t* written = new uint8_t[size];
    memcpy(written, data, size);
    TagMemoryChunk tmc(size, written);
    putByteArray(string(key), tmc);
}
//void CompoundTag::_putByteArray(const string& key, const TagMemoryChunk& value) {
//    return SymCall("?putByteArray@CompoundTag@@QEAAAEAUTagMemoryChunk@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U2@@Z",
//                   void, void*, string, const TagMemoryChunk&)(this, key, value);
//}

void CompoundTag::putDouble(const std::string& k, double v) {

    Tag* tag = Tag::createTag(Tag::Type::Double);
    tag->asDouble() = v;
    put(k, std::move(*tag));
}
