#pragma once

#include <memory.h>
#include "jsi/jsi.h"

namespace facebook {

std::unique_ptr<jsi::Runtime> createV8Runtime(const std::string &timezoneId);

} // namespace facebook
