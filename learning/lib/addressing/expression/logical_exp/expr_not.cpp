//
//  expr_not.cpp
//  addressing
//
//  Created by xiangyun.kongxy on 5/9/13.
//  Copyright (c) 2013 losor. All rights reserved.
//

#include "expr_not.h"

expr_not::~expr_not()
{

}

expr_not::expr_not( expression *src, expression *dst )
{
  m_src = src;
  m_dst = dst;
}

enum operation expr_not::operation() const
{
  return OPT_OR;
}

expression* expr_not::paramenter( int nth ) const
{
  switch ( nth ) {
    case 0:
      return m_src;
    case 1:
      return m_dst;
  }

  return nullptr;
}

expr_result* expr_not::calculate( ) const
{
    // override this implement
  return nullptr;
}