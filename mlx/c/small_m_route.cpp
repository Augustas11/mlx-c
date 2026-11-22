/* Copyright © 2026 Apple Inc. */

#include "mlx/c/small_m_route.h"
#include "mlx/c/error.h"
#include "mlx/small_m_route.h"

#include <exception>

extern "C" int mlx_set_small_m_route_scope(int route) {
  try {
    mlx::core::set_small_m_route_scope(route);
  } catch (std::exception& e) {
    mlx_error(e.what());
    return 1;
  }
  return 0;
}
extern "C" int mlx_clear_small_m_route_scope(void) {
  try {
    mlx::core::clear_small_m_route_scope();
  } catch (std::exception& e) {
    mlx_error(e.what());
    return 1;
  }
  return 0;
}
extern "C" int mlx_small_m_route_scope(int* res) {
  try {
    *res = mlx::core::small_m_route_scope();
  } catch (std::exception& e) {
    mlx_error(e.what());
    return 1;
  }
  return 0;
}
extern "C" int mlx_process_small_m_route(int* res) {
  try {
    *res = mlx::core::process_small_m_route();
  } catch (std::exception& e) {
    mlx_error(e.what());
    return 1;
  }
  return 0;
}
extern "C" int mlx_current_small_m_route(int* res) {
  try {
    *res = mlx::core::small_m_route();
  } catch (std::exception& e) {
    mlx_error(e.what());
    return 1;
  }
  return 0;
}
