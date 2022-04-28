#pragma once
#pragma region Property

#define Property(type, nativeName, name) \
    property type name                   \
    {                                    \
        inline type get()                \
        {                                \
            return _this->nativeName;    \
        }                                \
        inline void set(type arg)        \
        {                                \
            _this->nativeName = arg;     \
        }                                \
    }

#define Property_Instance(Namespace, type, nativeName, name) \
    property Namespace::type ^ name {                        \
        inline Namespace::type ^ get() {                     \
            return gcnew Namespace::type(_this->nativeName); \
        } inline void                                        \
            set(Namespace::type ^ arg)                       \
        {                                                    \
            _this->nativeName = arg;                         \
        }                                                    \
    }

#define Property_Ptr(Namespace, type, nativeName, name)      \
    property Namespace::type ^ name {                        \
        inline Namespace::type ^ get() {                     \
            return gcnew Namespace::type(_this->nativeName); \
        } inline void                                        \
            set(Namespace::type ^ arg)                       \
        {                                                    \
            _this->nativeName = arg->NativePtr;              \
        }                                                    \
    }

#define Property_Enum(type, nativeEnum, nativeName, name) \
    property type name                                    \
    {                                                     \
        inline type get()                                 \
        {                                                 \
            return ((type)(_this->nativeName));           \
        }                                                 \
        inline void set(type arg)                         \
        {                                                 \
            _this->nativeName = ((nativeEnum)(arg));      \
        }                                                 \
    }

#define Property_String(nativeName, name)                              \
    property System::String ^ name {                                   \
        inline System::String ^ get() {                                \
            return marshalString<Encoding::E_UTF8>(_this->nativeName); \
        } inline void                                                  \
            set(System::String ^ arg)                                  \
        {                                                              \
            _this->nativeName = marshalString<Encoding::E_UTF8>(arg);  \
        }                                                              \
    }

#define Property_ReadOnly(type, nativeName, name) \
    property type name                            \
    {                                             \
        inline type get()                         \
        {                                         \
            return _this->nativeName;             \
        }                                         \
    }

#define Property_Instance_ReadOnly(Namespace, type, nativeName, name) \
    property Namespace::type ^ name {                                 \
        inline Namespace::type ^ get() {                              \
            return gcnew Namespace::type(_this->nativeName);          \
        }                                                             \
    }

#define Property_Ptr_ReadOnly(Namespace, type, nativeName, name)    \
    property Namespace::type ^ name {                               \
        inline Namespace::type ^ get() {                            \
            return gcnew Namespace::type((void*)_this->nativeName); \
        }                                                           \
    }

#define Property_Enum_ReadOnly(type, nativeEnum, nativeName, name) \
    property type name                                             \
    {                                                              \
        inline type get()                                          \
        {                                                          \
            return ((type)(_this->nativeName));                    \
        }                                                          \
    }

#define Property_String_ReadOnly(nativeName, name) \
    property System::String ^ name {               \
        inline System::String ^ get() {            \
            return toSysString(_this->nativeName); \
        }                                          \
    }

#pragma endregion
