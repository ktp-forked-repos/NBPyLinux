/* Licensed to the Apache Software Foundation (ASF) under one or more
* contributor license agreements.  See the NOTICE file distributed with
* this work for additional information regarding copyright ownership.
* The ASF licenses this file to You under the Apache License, Version 2.0
* (the "License"); you may not use this file except in compliance with
* the License.  You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
/*************************************************************************
 * File: pyextend.h
 *************************************************************************
 *\author: starlove
 *************************************************************************/

#ifndef LOGICSVR_PYEXTEND_H
#define LOGICSVR_PYEXTEND_H

#include <stacklessengine.h>

NS(NBPy)

    class CPyLogicsvr : public CPyClassBase
    {
    PYCLASS_DEF_INTERFACE(CPyLogicsvr)
    public:
        CPyLogicsvr(IScriptEngine *e){}
        ~CPyLogicsvr(){}
        PYCLASS_METHOD_DEF(CPyLogicsvr,GetPIDFilePath);
        PYCLASS_METHOD_DEF(CPyLogicsvr,Inform);
        PYCLASS_METHOD_DEF(CPyLogicsvr,Send);
        PYCLASS_METHOD_DEF(CPyLogicsvr,BatchSend);
        PYCLASS_METHOD_DEF(CPyLogicsvr,SetTags);
        PYCLASS_METHOD_DEF(CPyLogicsvr,Deliver);
    private:
    };

    extern void InitExtendModule();
NSE

#endif //LOGICSVR_PYEXTEND_H
