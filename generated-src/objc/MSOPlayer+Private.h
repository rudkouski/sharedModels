// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from general.djinni

#import "MSOPlayer.h"
#include "player.hpp"

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class MSOPlayer;

namespace djinni_generated {

struct Player
{
    using CppType = ::shared_objects::Player;
    using ObjcType = MSOPlayer*;

    using Boxed = Player;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);
};

}  // namespace djinni_generated