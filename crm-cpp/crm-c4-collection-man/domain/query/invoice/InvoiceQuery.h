#pragma once
#ifndef _SAMPLE_QUERY_
#define _SAMPLE_QUERY_

#include "ApiHelper.h"
#include "ServerInfo.h"
#include "domain/query/PageQuery.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * ʾ����ҳ��ѯ����
 */
class InvoiceQuery : public PageQuery
{
	DTO_INIT(InvoiceQuery, PageQuery);
	DTO_FIELD(UInt64, record_id);
	DTO_FIELD_INFO(record_id) {
		info->description = ZH_WORDS_GETTER("Invoice.field.record_id");
	}
	//��ͬid
	DTO_FIELD(UInt64, contract_id);
	DTO_FIELD_INFO(contract_id) {
		info->description = ZH_WORDS_GETTER("Invoice.field.contract_id");
	}
	// ��ͬ����
	DTO_FIELD(String, contract_name);
	DTO_FIELD_INFO(contract_name) {
		info->description = ZH_WORDS_GETTER("Invoice.field.contract_name");
	}
	DTO_FIELD(UInt64, customer_id);
	DTO_FIELD_INFO(customer_id) {
		info->description = ZH_WORDS_GETTER("Invoice.field.customer_id");
	}
	//�˿�����
	DTO_FIELD(String, customer_name);
	DTO_FIELD_INFO(customer_name) {
		info->description = ZH_WORDS_GETTER("Invoice.field.customer_name");
	}
	// ���
	DTO_FIELD(Int64, money);
	DTO_FIELD_INFO(money) {
		info->description = ZH_WORDS_GETTER("Invoice.field.money");
	}
	// ��Ʊ����
	DTO_FIELD(String, pay_date);
	DTO_FIELD_INFO(pay_date) {
		info->description = ZH_WORDS_GETTER("Invoice.field.pay_date");
	}
	//��Ʊ�ڴ�
	DTO_FIELD(Int64, stages);
	DTO_FIELD_INFO(stages) {
		info->description = ZH_WORDS_GETTER("Invoice.field.stages");
	}
	//��Ʊ���
	DTO_FIELD(String, invoice_no);
	DTO_FIELD_INFO(invoice_no) {
		info->description = ZH_WORDS_GETTER("Invoice.field.invoice_no");
	}
	//������Ա
	DTO_FIELD(String, name);
	DTO_FIELD_INFO(name) {
		info->description = ZH_WORDS_GETTER("Invoice.field.name");
	}
	//��Ʊ����bus_type
	DTO_FIELD(String, bus_type);
	DTO_FIELD_INFO(bus_type) {
		info->description = ZH_WORDS_GETTER("Invoice.field.bus_type");
	}
	//��ע
	DTO_FIELD(String, intro);
	DTO_FIELD_INFO(intro) {
		info->description = ZH_WORDS_GETTER("Invoice.field.intro");
	}
	//����ʱ��
	DTO_FIELD(String, create_time);
	DTO_FIELD_INFO(create_time) {
		info->description = ZH_WORDS_GETTER("Invoice.field.create_time");
	}
	//������id
	DTO_FIELD(Int64, create_user_id);
	DTO_FIELD_INFO(create_user_id) {
		info->description = ZH_WORDS_GETTER("Invoice.field.create_user_id");
	}
};

#include OATPP_CODEGEN_END(DTO)
#endif