//
//  expr_count.cpp
//  addressing
//
//  Created by xiangyun.kongxy on 5/9/13.
//  Copyright (c) 2013 losor. All rights reserved.
//

#include "expr_count.h"

expr_count::~expr_count()
{

}

expr_count::expr_count( expression *src, expression *dst )
{
  m_src = src;
  m_dst = dst;
}

enum operation expr_count::operation() const
{
  return OPT_COUNT;
}

expression* expr_count::paramenter( int nth ) const
{
  switch ( nth ) {
    case 0:
      return m_src;
    case 1:
      return m_dst;
  }

  return nullptr;
}

expr_result* expr_count::calculate( ) const
{
    // override this implement
  return nullptr;
}
