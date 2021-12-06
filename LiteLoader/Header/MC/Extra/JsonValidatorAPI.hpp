//Extra Part For JsonValidator.hpp
#ifdef EXTRA_INCLUDE_PART_JSONVALIDATOR
// Include Headers or Declare Types Here

#else
// Add Member There
public:
class Property {
public:
    Property() = delete;
    Property(Property const&) = delete;
    Property(Property const&&) = delete;
};

#endif
