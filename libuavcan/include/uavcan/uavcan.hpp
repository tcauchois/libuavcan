/*
 * Copyright (C) 2014 Pavel Kirienko <pavel.kirienko@gmail.com>
 *
 * This header should be included by the user application.
 */

#pragma once

#include <uavcan/impl_constants.hpp>
#include <uavcan/time.hpp>

// High-level node logic
#include <uavcan/node/node.hpp>
#include <uavcan/node/timer.hpp>
#include <uavcan/node/publisher.hpp>
#include <uavcan/node/subscriber.hpp>
#include <uavcan/node/service_server.hpp>
#include <uavcan/node/service_client.hpp>
#include <uavcan/node/global_data_type_registry.hpp>

// Util
#include <uavcan/util/compile_time.hpp>
#include <uavcan/util/lazy_constructor.hpp>
#include <uavcan/util/method_binder.hpp>