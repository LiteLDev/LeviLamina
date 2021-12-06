//Extra Part For Crypto.hpp
#ifdef EXTRA_INCLUDE_PART_CRYPTO
// Include Headers or Declare Types Here

#else
// Add Member There
namespace Hash {
class md5 {
public:
    md5() = delete;
    md5(md5 const&) = delete;
    md5(md5 const&&) = delete;
};
} // namespace Hash

#endif
