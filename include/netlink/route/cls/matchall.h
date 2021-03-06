/*
 * netlink/route/cls/matchall.h	matchall classifier
 *
 *	This library is free software; you can redistribute it and/or
 *	modify it under the terms of the GNU Lesser General Public
 *	License as published by the Free Software Foundation version 2.1
 *	of the License.
 *
 * Copyright (c) 2017 Volodymyr Bendiuga <volodymyr.bendiuga@gmail.com>
 */

#ifndef NETLINK_MATCHALL_H_
#define NETLINK_MATCHALL_H_

#include <netlink/netlink.h>
#include <netlink/cache.h>
#include <netlink/route/classifier.h>
#include <netlink/route/action.h>

#ifdef __cplusplus
extern "C" {
#endif

extern int	rtnl_mall_set_classid(struct rtnl_cls *, uint32_t);
extern int	rtnl_mall_get_classid(struct rtnl_cls *, uint32_t *);
extern int	rtnl_mall_set_flags(struct rtnl_cls *, uint32_t);
extern int	rtnl_mall_get_flags(struct rtnl_cls *, uint32_t *);
extern int	rtnl_mall_append_action(struct rtnl_cls *, struct rtnl_act *);
extern struct rtnl_act *rtnl_mall_get_first_action(struct rtnl_cls *);
extern int	rtnl_mall_del_action(struct rtnl_cls *, struct rtnl_act *);

#ifdef __cplusplus
}
#endif

#endif
